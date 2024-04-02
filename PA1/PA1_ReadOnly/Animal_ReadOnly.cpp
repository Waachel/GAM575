//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Animal.h"

//-------------------------------------------
//       ---> DO NOT MODIFY <---
//-------------------------------------------

Animal::Animal(float _a, float _b, float _c)
	:a(_a),
	b(_b),
	c(_c)
{

}

void Animal::Print(const char *const pName) const
{
	Trace::out("%s: \n", pName);
	Trace::out("   a,b,c: %f %f %f \n", this->a, this->b, this->c);
}

// --- End of File ---
