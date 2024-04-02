//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Dog.h"

//-------------------------------------------
//       ---> DO NOT MODIFY <---
//-------------------------------------------

Dog::Dog(float a, float b, float c, float _x, float _y, float _z )
	:Animal(a,b,c),
	x(_x),
	y(_y),
	z(_z)
{

}

void Dog::Print(const char *const pName) const
{
	Trace::out("%s: \n", pName);
	Trace::out("   x,y,z: %f %f %f %f\n", this->x, this->y, this->z);
	Animal::Print(pName);
}

// --- End of File ---
