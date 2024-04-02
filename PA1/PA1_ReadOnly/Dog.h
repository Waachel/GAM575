//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------
#ifndef DOG_H
#define DOG_H

#include "Dog.pb.h"
#include "Animal.h"

//-------------------------------------------
//       ---> DO NOT MODIFY <---
//-------------------------------------------

class Dog : public Animal
{
public:
	Dog() = default;
	Dog(const Dog &) = default;
	Dog &operator = (const Dog &) = default;
	~Dog() = default;

	Dog(float a, float b, float c, float x, float y, float z);

	// Serialization 
	void Serialize(Dog_proto &out) const;
	void Deserialize(const Dog_proto &in);

	void Print(const char *const pName) const;

public:
	float x;
	float y;
	float z;

};

#endif

// --- End of File ---

