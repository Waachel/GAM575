//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------
#ifndef ANIMAL_H
#define ANIMAL_H

#include "Animal.pb.h"

//-------------------------------------------
//       ---> DO NOT MODIFY <---
//-------------------------------------------

class Animal
{
public:
	Animal() = default;
	Animal(const Animal &) = default;
	Animal &operator = (const Animal &) = default;
	~Animal() = default;

	Animal(float a, float b, float c);

	// Serialization 
	void Serialize(Animal_proto &out) const;
	void Deserialize(const Animal_proto &in);

	void Print(const char *const pName) const;

public:
	float a;
	float b;
	float c;
};

#endif

// --- End of File ---

