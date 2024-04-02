//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "GameObject.h"

void GameObject::Serialize(GameObject_proto &out) const
{
	AZUL_REPLACE_ME_STUB(out);
	//out.set_matrix(this->poMatrix);
//	out.set_exterdataa(poMatrix);

	Matrix_proto* pMatrix_proto = new Matrix_proto();
	this->poMatrix->Serialize(*pMatrix_proto);
	out.set_allocated_pomatrix(pMatrix_proto);

	Vect_proto* pVect_proto = new Vect_proto();
	this->poVect->Serialize(*pVect_proto);
	out.set_allocated_povect(pVect_proto);

	out.set_x(this->x);
	out.set_x(this->x);
	out.set_i(this->i);
	Vect_proto* pVect_protoA = new Vect_proto();
	this->vA.Serialize(*pVect_protoA);
	out.set_allocated_va(pVect_protoA);
}

void GameObject::Deserialize(const GameObject_proto &in)
{
	AZUL_REPLACE_ME_STUB(in);

//	this->poMatrix = in.exterdataa();
	//this->poMatrix = in.exterdatab();
	this->poMatrix->Deserialize(in.pomatrix());
	this->poVect->Deserialize(in.povect());
	this->x = in.x();
	this->i = in.i();
	this->vA.Deserialize(in.va());
}

// --- End of File ---
