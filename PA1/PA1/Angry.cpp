//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Angry.h"

void Angry::Serialize(Angry_proto &out) const
{
	out.add_data(arr[0]);
	out.add_data(arr[1]);
	out.add_data(arr[2]);
	out.add_data(arr[3]);
	out.set_value(this->value);
}

void Angry::Deserialize(const Angry_proto &in)
{
	this->arr[0] = in.data(0);
	this->arr[1] = in.data(1);
	this->arr[2] = in.data(2);
	this->arr[3] = in.data(3);
	this->value = in.value();
}

// --- End of File ---
