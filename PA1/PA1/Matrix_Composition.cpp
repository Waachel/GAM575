//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Matrix_Composition.h"

void Matrix_Composition::Serialize(Matrix_Composition_proto &out) const
{
	// Dog which is inside of Cat
	Vect_proto* pVect_proto0 = new Vect_proto();
	Vect_proto* pVect_proto1 = new Vect_proto();
	Vect_proto* pVect_proto2 = new Vect_proto();
	Vect_proto* pVect_proto3 = new Vect_proto();
	this->v0.Serialize(*pVect_proto0);
	out.set_allocated_v0(pVect_proto0);
	this->v1.Serialize(*pVect_proto1);
	out.set_allocated_v1(pVect_proto1);
	this->v2.Serialize(*pVect_proto2);
	out.set_allocated_v2(pVect_proto2);
	this->v3.Serialize(*pVect_proto3);
	out.set_allocated_v3(pVect_proto3);
}

void Matrix_Composition::Deserialize(const Matrix_Composition_proto &in)
{
	this->v0.Deserialize(in.v0());
	this->v1.Deserialize(in.v1());
	this->v2.Deserialize(in.v2());
	this->v3.Deserialize(in.v3());
}

// --- End of File ---
