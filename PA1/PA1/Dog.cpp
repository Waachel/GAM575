//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Dog.h"

void Dog::Serialize(Dog_proto &out) const
{
	AZUL_REPLACE_ME_STUB(out);
	out.set_a(this->a);
	out.set_b(this->b);
	out.set_c(this->c);
	out.set_x(this->x);
	out.set_y(this->y);
	out.set_z(this->z);
}

void Dog::Deserialize(const Dog_proto &in)
{
	AZUL_REPLACE_ME_STUB(in);
	this->a = in.a();
	this->b = in.b();
	this->c = in.c();
	this->x = in.x();
	this->y = in.y();
	this->z = in.z();
}

// --- End of File ---
