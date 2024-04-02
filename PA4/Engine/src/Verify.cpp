//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Verify.h"
#include <Mesh.h>
#include "MeshProto.h"
#include "TextureProto.h"
#include "MeshProto.h"
#include "MathEngine.h"
#include "Engine.h"
#include "File.h"
#include "meshData.h"
#include <md5.h>

void Verify::GetVertsCopy(unsigned char *&p, unsigned int &numBytes)
{ 
	const char* const pMeshFileName = "spaceV3.proto.azul";

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

	char* poBuff = new char[length];
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
	unsigned int numVerts = (int)mB.vbo_vert.count;
	unsigned int numIndices = (int)mB.triCount * 3;

	assert(numIndices > 0);
	assert(numVerts > 0);


	// Load the verts data: ---------------------------------------------------------

	// ------------------------------------------------
	// Create an initialize the vertex buffer - pos
	// ------------------------------------------------
	

	assert(mB.vbo_vert.poData);
	assert(mB.vbo_vert.dataSize > 0);
	//	assert(mB.vbo_vert.vboType == vboData::VBO_TYPE::VEC4);
	assert(mB.vbo_vert.componentType == vboData::VBO_COMPONENT::FLOAT);

	numBytes = mB.vbo_vert.dataSize;
	unsigned char *pBuff = new unsigned char[numBytes];
	
	memcpy(pBuff, mB.vbo_vert.poData, mB.vbo_vert.dataSize);

	p = pBuff;


	//unsigned int md5 = 0;
	//unsigned char* check = pBuffVBO;
//	MD5BufferReduced((unsigned char*)pBuff, numBytes, md5);
}

void Verify::GetNormsCopy(unsigned char *&p, unsigned int &numBytes)
{
	const char* const pMeshFileName = "spaceV3.proto.azul";

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

	char* poBuff = new char[length];
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
	unsigned int numVerts = (int)mB.vbo_norm.count;
	unsigned int numIndices = (int)mB.triCount * 3;

	assert(numIndices > 0);
	assert(numVerts > 0);


	// Load the verts data: ---------------------------------------------------------

	// ------------------------------------------------
	// Create an initialize the vertex buffer - pos
	// ------------------------------------------------


	assert(mB.vbo_norm.poData);
	assert(mB.vbo_norm.dataSize > 0);
	//	assert(mB.vbo_vert.vboType == vboData::VBO_TYPE::VEC4);
	assert(mB.vbo_norm.componentType == vboData::VBO_COMPONENT::FLOAT);

	numBytes = mB.vbo_norm.dataSize;
	unsigned char* pBuff = new unsigned char[numBytes];

	memcpy(pBuff, mB.vbo_norm.poData, mB.vbo_norm.dataSize);

	p = pBuff;
}

void Verify::GetUVsCopy(unsigned char *&p, unsigned int &numBytes)
{
	const char* const pMeshFileName = "spaceV3.proto.azul";

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

	char* poBuff = new char[length];
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
	unsigned int numVerts = (int)mB.vbo_uv.count;
	unsigned int numIndices = (int)mB.triCount * 3;

	assert(numIndices > 0);
	assert(numVerts > 0);


	// Load the verts data: ---------------------------------------------------------

	// ------------------------------------------------
	// Create an initialize the vertex buffer - pos
	// ------------------------------------------------


	assert(mB.vbo_uv.poData);
	assert(mB.vbo_uv.dataSize > 0);
	//	assert(mB.vbo_vert.vboType == vboData::VBO_TYPE::VEC4);
	assert(mB.vbo_uv.componentType == vboData::VBO_COMPONENT::FLOAT);

	numBytes = mB.vbo_uv.dataSize;
	unsigned char* pBuff = new unsigned char[numBytes];

	memcpy(pBuff, mB.vbo_uv.poData, mB.vbo_uv.dataSize);

	p = pBuff;
}

void Verify::GetIndexCopy(unsigned char *&p, unsigned int &numBytes)
{
	const char* const pMeshFileName = "spaceV3.proto.azul";

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

	char* poBuff = new char[length];
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
	unsigned int numVerts = (int)mB.vbo_index.count;
	unsigned int numIndices = (int)mB.triCount * 3;

	assert(numIndices > 0);
	assert(numVerts > 0);


	// Load the verts data: ---------------------------------------------------------

	// ------------------------------------------------
	// Create an initialize the vertex buffer - pos
	// ------------------------------------------------


	assert(mB.vbo_index.poData);
	assert(mB.vbo_index.dataSize > 0);
	//	assert(mB.vbo_vert.vboType == vboData::VBO_TYPE::VEC4);
	//assert(mB.vbo_index.componentType == vboData::VBO_COMPONENT::FLOAT);

	numBytes = mB.vbo_index.dataSize;
	unsigned char* pBuff = new unsigned char[numBytes];

	memcpy(pBuff, mB.vbo_index.poData, mB.vbo_index.dataSize);

	p = pBuff;
}

void Verify::GetTextureBufferCopy(unsigned char *&p, unsigned int &numBytes)
{
	const char* const pMeshFileName = "spaceV3.proto.azul";

	// Fill in textTexture
	DirectX::ScratchImage testTexture;

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

	char* poBuff = new char[length];
	assert(poBuff);

	ferror = File::Read(fh, poBuff, length);
	assert(ferror == File::Error::SUCCESS);

	ferror = File::Close(fh);
	assert(ferror == File::Error::SUCCESS);

	// Now the raw data is poBUff
	// deserialize the data --> mB

	//Trace::out("--------------\n");

	std::string strIn(poBuff, length);
	meshData_proto mB_proto;

	mB_proto.ParseFromString(strIn);

	meshData mB;
	mB.Deserialize(mB_proto);
	//mB.Print("mB");

	delete[] poBuff;

	//----------------------

	// Create texture
	//HRESULT hr;

	D3D11_TEXTURE2D_DESC desc;
	desc.Width = mB.text_color.width;
	desc.Height = mB.text_color.height;
	desc.MipLevels = 1;
	desc.ArraySize = 1;

	assert(mB.text_color.textType == textureData::TEXTURE_TYPE::PNG);
	desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;//GUID_WICPixelFormat32bppRGBA

	desc.SampleDesc.Count = 1;
	desc.SampleDesc.Quality = 0;
	desc.Usage = D3D11_USAGE_DEFAULT;
	desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
	desc.CPUAccessFlags = 0;
	desc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA subResource;
	subResource.pSysMem = mB.text_color.poData;
	subResource.SysMemPitch = desc.Width * 4;
	subResource.SysMemSlicePitch = 0;

	numBytes = mB.text_color.dataSize;
	unsigned char* pBuff = new unsigned char[numBytes];

	memcpy(pBuff, mB.text_color.poData, numBytes);

	p = pBuff;

	unsigned int md5;
	MD5BufferReduced(p, numBytes, md5);
}


Verify::Model_stats Verify::GetModelStats()
{
	const char* const pMeshFileName = "space_frigate.proto.azul";
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

	char* poBuff = new char[length];
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

	Model_stats stats;
	stats.numVerts = (int)mB.vbo_vert.count;
	stats.numTris = (int)mB.triCount;

	stats.TextureWidth = mB.text_color.width;
	stats.TextureHeight = mB.text_color.height;

	return stats;
}


// --- End of File ---
