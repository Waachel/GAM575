//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "Texture.h"

void Texture::Serialize(Texture_proto &out) const
{
	AZUL_REPLACE_ME_STUB(out);
	std::string s(this->poData, this->DataSize);
	out.set_podata(s);
	out.set_datasize(this->DataSize);

}

void Texture::Deserialize(const Texture_proto &in)
{
	AZUL_REPLACE_ME_STUB(in);
	this->DataSize = in.datasize();
	this->poData = new char[this->DataSize]();
	assert(this->poData);
	memcpy(this->poData, in.podata().data(), this->DataSize);
}

// --- End of File ---
