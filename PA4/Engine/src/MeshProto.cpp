//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "MeshProto.h"
#include "MathEngine.h"
#include "Engine.h"
#include "File.h"
#include "meshData.h"
#include <md5.h>

// HACK FEST --- will eventually be in managers/singleton
extern ID3D11Device *pHackDevice;
extern ID3D11DeviceContext *pHackDeviceContext;

using namespace Azul;

MeshProto::MeshProto(const char *const pMeshFileName)
	: Mesh(0, 0)   // need to update numVerts and numIndices
{
	// future proofing it for a file
	assert(pMeshFileName);
	AZUL_UNUSED_VAR(pMeshFileName);

	// ----------------------------------------------
	// READ the data from the file ONLY
	// ----------------------------------------------

	// File stuff
	File::Handle fh;
	File::Error  ferror;

	ferror = File::Open(fh, pMeshFileName, File::Mode::READ);
	assert(ferror == File::Error::SUCCESS);

	// Get the size
	ferror = File::Seek(fh, File::Position::END, 0);
	assert(ferror == File::Error::SUCCESS);

	DWORD length;
	ferror = File::Tell(fh, length);
	assert(ferror == File::Error::SUCCESS);

	ferror = File::Seek(fh, File::Position::BEGIN, 0);
	assert(ferror == File::Error::SUCCESS);

	char *poBuff = new char[length];
	assert(poBuff);

	ferror = File::Read(fh, poBuff, length);
	assert(ferror == File::Error::SUCCESS);

	ferror = File::Close(fh);
	assert(ferror == File::Error::SUCCESS);

	// Now the raw data is poBUff
	// deserialize the data --> mB

	Trace::out("--------------\n");

	std::string strIn(poBuff, length);
	meshData_proto mB_proto;

	mB_proto.ParseFromString(strIn);

	meshData mB;
	mB.Deserialize(mB_proto);
	mB.Print("mB");

	delete[] poBuff;

	Trace::out("--------------\n");

	// Now the model is mB...
	// move it into the Mesh

	// Using the hdr, allocate the space for the buffers
	this->numVerts = (int)mB.vbo_vert.count;
	this->numIndices = (int)mB.triCount * 3;

	assert(this->numIndices > 0);
	assert(this->numVerts > 0);


	// Load the verts data: ---------------------------------------------------------

	// ------------------------------------------------
	// Create an initialize the vertex buffer - pos
	// ------------------------------------------------

	unsigned int numBytes;
	void *pBuff;

	assert(mB.vbo_vert.poData);
	assert(mB.vbo_vert.dataSize > 0);
//	assert(mB.vbo_vert.vboType == vboData::VBO_TYPE::VEC4);
	assert(mB.vbo_vert.componentType == vboData::VBO_COMPONENT::FLOAT);

	numBytes = mB.vbo_vert.dataSize;
	pBuff = mB.vbo_vert.poData;

	this->numBytesVerts = numBytes;
	this->pBuffVerts = pBuff;

	poVertexBuffer_pos = CreateVertexBuffer(numBytes, pBuff);

	// ------------------------------------------------
	// Create an initialize the vertex buffer - color
	// ------------------------------------------------

	// color - fix
	//numBytes = mB.v.vbo_vert.dataSize;
	//pBuff = mB.vbo_vert.poData;

	poVertexBuffer_color = nullptr;

	// ------------------------------------------------
	// Create an initialize the vertex buffer - uv
	// ------------------------------------------------

	assert(mB.vbo_uv.poData);
	assert(mB.vbo_uv.dataSize > 0);
	assert(mB.vbo_uv.vboType == vboData::VBO_TYPE::VEC2);
	assert(mB.vbo_uv.componentType == vboData::VBO_COMPONENT::FLOAT);

	numBytes = mB.vbo_uv.dataSize;
	pBuff = mB.vbo_uv.poData;

	poVertexBuffer_texCoord = CreateVertexBuffer(numBytes, pBuff);
	
	// ------------------------------------------------
	// Create an initialize the vertex buffer - norms
	// ------------------------------------------------

	assert(mB.vbo_norm.poData);
	assert(mB.vbo_norm.dataSize > 0);
	assert(mB.vbo_norm.vboType == vboData::VBO_TYPE::VEC3);
	assert(mB.vbo_norm.componentType == vboData::VBO_COMPONENT::FLOAT);

	numBytes = mB.vbo_norm.dataSize;
	pBuff = mB.vbo_norm.poData;
	
	poVertexBuffer_norm = CreateVertexBuffer(numBytes, pBuff);

	// ------------------------------------------------
	// Create and initialize the index buffer.
	// ------------------------------------------------

	assert(mB.vbo_index.vboType == vboData::VBO_TYPE::SCALAR);
	assert(mB.vbo_index.componentType != vboData::VBO_COMPONENT::DOUBLE
		   && mB.vbo_index.componentType != vboData::VBO_COMPONENT::FLOAT);
	assert(mB.vbo_index.dataSize > 0);
	assert(mB.vbo_index.poData);

	numBytes = mB.vbo_index.dataSize;
	pBuff = mB.vbo_index.poData;

	poIndexBuffer = CreateIndexBuffer(numBytes, pBuff);

	// Create the constant buffers for the variables defined in the vertex shader.
	poConstantBuff_Projection = CreateConstantBuffer(sizeof(Mat4));
	poConstantBuff_View = CreateConstantBuffer(sizeof(Mat4));
	poConstantBuff_World = CreateConstantBuffer(sizeof(Mat4));

	// Additional material owned by meshProto
	poConstantBuff_lightColor = CreateConstantBuffer(sizeof(Vec3));
	poConstantBuff_lightPos = CreateConstantBuffer(sizeof(Vec3));

}

MeshProto& MeshProto::operator=(MeshProto& m)
{
	// TODO: insert return statement here
	return m;
}

MeshProto::~MeshProto()
{
	// remove anything dynamic here
}


// --- End of File ---
