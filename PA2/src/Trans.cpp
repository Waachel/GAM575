//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "MathEngine.h"

namespace Azul
{
	// Do your magic here

	Trans::Trans()
	{
	}

	Trans::Trans(const float tx, const float ty, const float tz)
	{
		Mat4::set(Special::Identity);
		_m12 = tx;
		_m13 = ty;
		_m14 = tz;
	}

	Trans::Trans(const Vec3& vTrans)
	{
		Mat4::set(Special::Identity);
		_m12 = vTrans.x();
		_m13 = vTrans.y();
		_m14 = vTrans.z();
	}

	void Trans::set(const float tx, const float ty, const float tz)
	{
		this->_m12 = tx;
		this->_m13 = ty;
		this->_m14 = tz;
	}

	void Trans::set(const Vec3& vTrans)
	{
		this->_m12 = vTrans.x();
		this->_m13 = vTrans.y();
		this->_m14 = vTrans.z();
	}

}

// ---  End of File ---
