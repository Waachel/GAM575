//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "MathEngine.h"

namespace Azul
{
	// Do your magic here


	Scale::Scale()
	{

	}

	Scale::Scale(const float sx, const float sy, const float sz)
	{
		AZUL_UNUSED_VAR(sx);
		AZUL_UNUSED_VAR(sy);
		AZUL_UNUSED_VAR(sz);
		//set to identity
		Mat4::set(Special::Identity);

		_m0 = _m0 * sx;
		_m1 = _m1 * sx;
		_m2 = _m2 * sx;
		_m3 = _m3 * sx;

		_m4 = _m4 * sy;
		_m5 = _m5 * sy;
		_m6 = _m6 * sy;
		_m7 = _m7 * sy;

		_m8 = _m8 * sz;
		_m9 = _m9 * sz;
		_m10 = _m10 * sz;
		_m11 = _m11 * sz;

	}

	Scale::Scale(const Vec3& vScale)
	{
		//set to identity
		Mat4::set(Special::Identity);

		_m0 = _m0 * vScale.x();
		_m1 = _m1 * vScale.x();
		_m2 = _m2 * vScale.x();
		_m3 = _m3 * vScale.x();

		_m4 = _m4 * vScale.y();
		_m5 = _m5 * vScale.y();
		_m6 = _m6 * vScale.y();
		_m7 = _m7 * vScale.y();

		_m8 = _m8 * vScale.z();
		_m9 = _m9 * vScale.z();
		_m10 = _m10 * vScale.z();
		_m11 = _m11 * vScale.z();
	}

	void Scale::set(const float sx, const float sy, const float sz)
	{
		//set to identity
		Mat4::set(Special::Identity);
		this->_m0 = _m0 * sx;
		this->_m1 = _m1 * sx;
		this->_m2 = _m2 * sx;
		this->_m3 = _m3 * sx;

		this->_m4 = _m4 * sy;
		this->_m5 = _m5 * sy;
		this->_m6 = _m6 * sy;
		this->_m7 = _m7 * sy;

		this->_m8 = _m8 * sz;
		this->_m9 = _m9 * sz;
		this->_m10 = _m10 * sz;
		this->_m11 = _m11 * sz;
	}

	void Scale::set(const Vec3& vScale)
	{
		//set to identity
		Mat4::set(Special::Identity);
		this->_m0 = _m0 * vScale.x();
		this->_m1 = _m1 * vScale.x();
		this->_m2 = _m2 * vScale.x();
		this->_m3 = _m3 * vScale.x();

		this->_m4 = _m4 * vScale.y();
		this->_m5 = _m5 * vScale.y();
		this->_m6 = _m6 * vScale.y();
		this->_m7 = _m7 * vScale.y();

		this->_m8 = _m8 * vScale.z();
		this->_m9 = _m9 * vScale.z();
		this->_m10 = _m10 * vScale.z();
		this->_m11 = _m11 * vScale.z();
	}

}

// ---  End of File ---
