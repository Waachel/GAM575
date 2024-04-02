//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Animal.h"

void Animal::Serialize(Animal_proto &out) const
{
	AZUL_REPLACE_ME_STUB(out);	
	out.set_a(this->a);
	out.set_b(this->b);
	out.set_c(this->c);
}

void Animal::Deserialize(const Animal_proto &in)
{
	AZUL_REPLACE_ME_STUB(in);
	this->a = in.a();
	this->b = in.b();
	this->c = in.c();
}

// --- End of File ---
