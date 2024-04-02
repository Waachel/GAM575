//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Address.h"

void Address::Serialize(Address_proto &out) const
{
	std::string s1(this->poName, Address::N);
	out.set_poname(s1);
	std::string s2(this->poAddr, Address::N);
	out.set_poaddr(s2);
	std::string s3(this->poPhone, Address::N);
	out.set_pophone(s3);

}

void Address::Deserialize(const Address_proto &in)
{
	//this->poName = new char[Address::N]();
	//assert(this->poName);
	memcpy(this->poName, in.poname().data(), Address::N);

	//this->poAddr = new char[Address::N]();
	//assert(this->poAddr);
	memcpy(this->poAddr, in.poaddr().data(), Address::N);

	//this->poPhone = new char[Address::N]();
	//assert(this->poPhone);
	memcpy(this->poPhone, in.pophone().data(), Address::N);
}

// --- End of File ---
