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

	Trans& Trans::operator=(Mat4&& m)
	{
		// TODO: insert return statement here
		_v0._vx = m.m0();
		_v0._vy = m.m1();
		_v0._vz = m.m2();
		_v0._vw = m.m3();

		_v1._vx = m.m4();
		_v1._vy = m.m5();
		_v1._vz = m.m6();
		_v1._vw = m.m7();

		_v2._vx = m.m8();
		_v2._vy = m.m9();
		_v2._vz = m.m10();
		_v2._vw = m.m11();

		_v3._vx = m.m12();
		_v3._vy = m.m13();
		_v3._vz = m.m14();
		_v3._vw = m.m15();

		return *this;
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
