//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#ifndef MESH_PROTO_H
#define MESH_PROTO_H

#include "Mesh.h"

class MeshProto : public Mesh
{
public:
	// Data
	MeshProto(const char *const pMeshFileName);

	MeshProto() = default;
	MeshProto(const MeshProto &) = delete;
	MeshProto &operator = (MeshProto &);
	virtual ~MeshProto();

	unsigned int numBytesVerts;
	void* pBuffVerts;
private:
//	virtual void privCreateVAO(const char *const pMeshFileName) override;

};

#endif

// --- End of File ---
