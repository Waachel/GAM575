//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "MathEngine.h"

namespace Azul
{
	// Do your magic here



	Rot::Rot()
	{
	}

	Rot::Rot(const Rot1 type, const float angle)
	{
		Mat4::set(Special::Identity);
		if (type == Rot1::X)
		{
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			_m5 = _m5 * Trig::cos(angle);
			_m6 = 1 * Trig::sin(angle);
			_m9 = 1 * -Trig::sin(angle);
			_m10 = _m10 * Trig::cos(angle);
		}

		else if (type == Rot1::Y)
		{
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			_m0 = _m0 * Trig::cos(angle);
			_m2 = 1 * -Trig::sin(angle);
			_m8 = 1 * Trig::sin(angle);
			_m10 = _m10 * Trig::cos(angle);
		}

		else
		{
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			_m0 = _m0 * Trig::cos(angle);
			_m1 = 1 * Trig::sin(angle);
			_m4 = 1 * -Trig::sin(angle);
			_m5 = _m5 * Trig::cos(angle);
		}
	}

	Rot::Rot(const Rot3 mode, const float angle_0, const float angle_1, const float angle_2)
	{
		Mat4::set(Special::Identity);
		Mat4 current(Vec4(this->_m0, _m4, _m8, _m12), Vec4(_m1, _m5, _m9, _m13), Vec4(_m2, _m6, _m10, _m14), Vec4(_m3, _m7, _m11, _m15));
		Mat4 tmp(Vec4(_m0, _m4, _m8, _m12), Vec4(_m1, _m5, _m9, _m13), Vec4(_m2, _m6, _m10, _m14), Vec4(_m3, _m7, _m11, _m15));
		Vec4 tmpi0, tmpi1, tmpi2;
		if (mode == Rot3::XYZ)
		{

			//X
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m5 = this->_m5 * Trig::cos(angle_0);
			this->_m6 = 1 * Trig::sin(angle_0);
			this->_m9 = 1 * -Trig::sin(angle_0);
			this->_m10 = this->_m10 * Trig::cos(angle_0);
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));
			current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			current = current * tmp;

			tmp.set(Special::Identity);

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
			tmpi0._vy = 1 * Trig::sin(angle_2);
			tmp.set(Row4::i0, tmpi0);

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vx = 1 * -Trig::sin(angle_2);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
			tmp.set(Row4::i1, tmpi1);

			current = current * tmp;

		}

		else if (mode == Rot3::XZY)
		{

			//X
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m5 = this->_m5 * Trig::cos(angle_0);
			this->_m6 = 1 * Trig::sin(angle_0);
			this->_m9 = 1 * -Trig::sin(angle_0);
			this->_m10 = this->_m10 * Trig::cos(angle_0);
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));
			current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

			//Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */


			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
			tmpi0._vy = 1 * Trig::sin(angle_2);
			tmp.set(Row4::i0, tmpi0);

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vx = 1 * -Trig::sin(angle_2);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
			tmp.set(Row4::i1, tmpi1);

			current = current * tmp;

			//Y
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */
			tmp.set(Special::Identity);

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			current = current * tmp;

		}

		else if (mode == Rot3::YXZ)
		{
				/*     | cos$  m1  -sin$   m3  | */
				/* m = | m4  1  m6   m7  | */
				/*     | sin$  m9  cos$  m11 | */
				/*     | m12 m13 m14  m15 | */
				//current
				this->_m0 = this->_m0 * Trig::cos(angle_1);
				this->_m2 = 1 * -Trig::sin(angle_1);
				this->_m8 = 1 * Trig::sin(angle_1);
				this->_m10 = this->_m10 * Trig::cos(angle_1);
				current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
				current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

				/*     | 1  m1  m2   m3  | */
				/* m = | m4  cos$  sin$   m7  | */
				/*     | m8  -sin$  cos$  m11 | */
				/*     | m12 m13 m14  m15 | */
				//tmp
				tmpi1 = tmp.get(Row4::i1);
				tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
				tmpi1._vz = 1 * Trig::sin(angle_0);
				tmp.set(Row4::i1, tmpi1);

				tmpi2 = tmp.get(Row4::i2);
				tmpi2._vy = 1 * -Trig::sin(angle_0);
				tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
				tmp.set(Row4::i2, tmpi2);

				current = current * tmp;

				/*     | cos$  sin$  m2   m3  | */
				/* m = | -sin$ cos$  m6   m7  | */
				/*     | m8  m9  m10  m11 | */
				/*     | m12 m13 m14  m15 | */
				tmp.set(Special::Identity);

				tmpi0 = tmp.get(Row4::i0);
				tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
				tmpi0._vy = 1 * Trig::sin(angle_2);
				tmp.set(Row4::i0, tmpi0);

				tmpi1 = tmp.get(Row4::i1);
				tmpi1._vx = 1 * -Trig::sin(angle_2);
				tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
				tmp.set(Row4::i1, tmpi1);

				current = current * tmp;
		}

		else if (mode == Rot3::YZX)
		{
			//current Y
						/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m0 = this->_m0 * Trig::cos(angle_1);
			this->_m2 = 1 * -Trig::sin(angle_1);
			this->_m8 = 1 * Trig::sin(angle_1);
			this->_m10 = this->_m10 * Trig::cos(angle_1);
			current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
			current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

			//tmp Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
			tmpi0._vy = 1 * Trig::sin(angle_2);
			tmp.set(Row4::i0, tmpi0);

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vx = 1 * -Trig::sin(angle_2);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
			tmp.set(Row4::i1, tmpi1);

			//multiply current and tmp to get new current
			current = current * tmp;

			//new tmp identity X
			tmp.set(Special::Identity);

			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
			tmpi1._vz = 1 * Trig::sin(angle_0);
			tmp.set(Row4::i1, tmpi1);

			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vy = 1 * -Trig::sin(angle_0);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp
			current = current * tmp;

		}

		else if (mode == Rot3::ZXY)
		{
			//current Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m0 = this->_m0 * Trig::cos(angle_2);
			this->_m1 = 1 * Trig::sin(angle_2);
			this->_m4 = 1 * -Trig::sin(angle_2);
			this->_m5 = this->_m5 * Trig::cos(angle_2);
			current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));

			//tmp X
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */


			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
			tmpi1._vz = 1 * Trig::sin(angle_0);
			tmp.set(Row4::i1, tmpi1);

			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vy = 1 * -Trig::sin(angle_0);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp to get new current
			current = current * tmp;

			//new tmp identity Y
			tmp.set(Special::Identity);
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp
			current = current * tmp;
		}

		//(mode == Rot3::ZYX)
		else
		{
			//current Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m0 = this->_m0 * Trig::cos(angle_2);
			this->_m1 = 1 * Trig::sin(angle_2);
			this->_m4 = 1 * -Trig::sin(angle_2);
			this->_m5 = this->_m5 * Trig::cos(angle_2);
			current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));

			//tmp Y
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp to get new current
			current = current * tmp;

			//new tmp identity X
			tmp.set(Special::Identity);

			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */


			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
			tmpi1._vz = 1 * Trig::sin(angle_0);
			tmp.set(Row4::i1, tmpi1);

			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vy = 1 * -Trig::sin(angle_0);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp
			current = current * tmp;
		}

		tmpi0 = current.get(Row4::i0);
		tmpi1 = current.get(Row4::i1);
		tmpi2 = current.get(Row4::i2);

		this->_m0 = tmpi0._vx;
		this->_m1 = tmpi0._vy;
		this->_m2 = tmpi0._vz;

		this->_m4 = tmpi1._vx;
		this->_m5 = tmpi1._vy;
		this->_m6 = tmpi1._vz;

		this->_m8 = tmpi2._vx;
		this->_m9 = tmpi2._vy;
		this->_m10 = tmpi2._vz;
	}

	Rot::Rot(const Axis mode, const Vec3& vAxis, const float angle_radians)
	{
		if (mode == Axis::AxisAngle)
		{
			float c = cos(angle_radians);
			float s = sin(angle_radians);
			float t = 1.0f - c;

			Vec3 norm = vAxis.getNorm();

			_m0 = c + norm.x() * norm.x() * t;
			_m5 = c + norm.y() * norm.y() * t;
			_m10 = c + norm.z() * norm.z() * t;

			float tmp1 = norm.x() * norm.y() * t;
			float tmp2 = norm.z() * s;

			_m1 = tmp1 + tmp2;
			_m4 = tmp1 - tmp2;
			tmp1 = norm.x() * norm.z() * t;
			tmp2 = norm.y() * s;
			_m2 = tmp1 - tmp2;
			_m8 = tmp1 + tmp2;    tmp1 = norm.y() * norm.z() * t;
			tmp2 = norm.x() * s;
			_m6 = tmp1 + tmp2;
			_m9 = tmp1 - tmp2;

			_m3 = 0;
			_m7 = 0;
			_m11 = 0;
			_m12 = 0;
			_m13 = 0;
			_m14 = 0;
			_m15 = 1;
		}

		//unit axis angle
		else
		{
			float c = cos(angle_radians);
			float s = sin(angle_radians);
			float t = 1.0f - c;

			Vec3 norm = vAxis.getNorm();

			_m0 = c + norm.x() * norm.x() * t;
			_m5 = c + norm.y() * norm.y() * t;
			_m10 = c + norm.z() * norm.z() * t;

			float tmp1 = norm.x() * norm.y() * t;
			float tmp2 = norm.z() * s;

			_m1 = tmp1 + tmp2;
			_m4 = tmp1 - tmp2;
			tmp1 = norm.x() * norm.z() * t;
			tmp2 = norm.y() * s;
			_m2 = tmp1 - tmp2;
			_m8 = tmp1 + tmp2;    tmp1 = norm.y() * norm.z() * t;
			tmp2 = norm.x() * s;
			_m6 = tmp1 + tmp2;
			_m9 = tmp1 - tmp2;

			_m3 = 0;
			_m7 = 0;
			_m11 = 0;
			_m12 = 0;
			_m13 = 0;
			_m14 = 0;
			_m15 = 1;
		}
	}

	Rot::Rot(const Orient type, const Vec3& dof, const Vec3& up)
	{
		if (type == Orient::LocalToWorld)
		{
			const Vec3 rz = dof.getNorm();

			/* find rx */
			Vec3 rx = up.cross(rz);
			rx.norm();

			/* find ry */
			Vec3 ry = rz.cross(rx);
			ry.norm();

			Mat4::set(Vec4(rx, 0), Vec4(ry, 0), Vec4(rz, 0), Vec4(0.0f, 0.0f, 0.0f, 1.0f));
			this->_m3 = 0.0f;
			this->_m7 = 0.0f;
			this->_m11 = 0.0f;
			this->_m15 = 1.0f;
		}

		//WorldToLocal
		else
		{
			const Vec3 rz = dof.getNorm();

			/* find rx */
			Vec3 rx = up.cross(rz);
			rx.norm();

			/* find ry */
			Vec3 ry = rz.cross(rx);
			ry.norm();

			
			Mat4::set(Vec4(rx, 0), Vec4(ry, 0), Vec4(rz, 0), Vec4(0.0f, 0.0f, 0.0f, 1.0f));
			
			this->_m3 = 0.0f;
			this->_m7 = 0.0f;
			this->_m11 = 0.0f;
			this->_m15 = 1.0f;

			Mat4 tmp = Mat4::getInv();
			

			Vec3 tmpi0, tmpi1, tmpi2;
			tmpi0 = tmp.get(Row4::i0);
			tmpi1 = tmp.get(Row4::i1);
			tmpi2 = tmp.get(Row4::i2);

			Mat4::set(Vec4(tmpi0, 0), Vec4(tmpi1, 0), Vec4(tmpi2, 0), Vec4(0.0f, 0.0f, 0.0f, 1.0f));
		}
	}

	void Rot::set(const Rot1 type, const float angle)
	{
		Mat4::set(Special::Identity);
		if (type == Rot1::X)
		{
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			_m5 = _m5 * Trig::cos(angle);
			_m6 = 1 * Trig::sin(angle);
			_m9 = 1 * -Trig::sin(angle);
			_m10 = _m10 * Trig::cos(angle);
		}

		else if (type == Rot1::Y)
		{
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			_m0 = _m0 * Trig::cos(angle);
			_m2 = 1 * -Trig::sin(angle);
			_m8 = 1 * Trig::sin(angle);
			_m10 = _m10 * Trig::cos(angle);
		}

		else
		{
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			_m0 = _m0 * Trig::cos(angle);
			_m1 = 1 * Trig::sin(angle);
			_m4 = 1 * -Trig::sin(angle);
			_m5 = _m5 * Trig::cos(angle);
		}
	}

	void Rot::set(const Rot3 mode, const float angle_0, const float angle_1, const float angle_2)
	{
		Mat4::set(Special::Identity);
		Mat4 current(Vec4(this->_m0, _m4, _m8, _m12), Vec4(_m1, _m5, _m9, _m13), Vec4(_m2, _m6, _m10, _m14), Vec4(_m3, _m7, _m11, _m15));
		Mat4 tmp(Vec4(_m0, _m4, _m8, _m12), Vec4(_m1, _m5, _m9, _m13), Vec4(_m2, _m6, _m10, _m14), Vec4(_m3, _m7, _m11, _m15));
		Vec4 tmpi0, tmpi1, tmpi2;
		if (mode == Rot3::XYZ)
		{

			//X
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m5 = this->_m5 * Trig::cos(angle_0);
			this->_m6 = 1 * Trig::sin(angle_0);
			this->_m9 = 1 * -Trig::sin(angle_0);
			this->_m10 = this->_m10 * Trig::cos(angle_0);
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));
			current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			current = current * tmp;

			tmp.set(Special::Identity);

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
			tmpi0._vy = 1 * Trig::sin(angle_2);
			tmp.set(Row4::i0, tmpi0);

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vx = 1 * -Trig::sin(angle_2);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
			tmp.set(Row4::i1, tmpi1);

			current = current * tmp;

		}

		else if (mode == Rot3::XZY)
		{

			//X
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m5 = this->_m5 * Trig::cos(angle_0);
			this->_m6 = 1 * Trig::sin(angle_0);
			this->_m9 = 1 * -Trig::sin(angle_0);
			this->_m10 = this->_m10 * Trig::cos(angle_0);
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));
			current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

			//Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */


			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
			tmpi0._vy = 1 * Trig::sin(angle_2);
			tmp.set(Row4::i0, tmpi0);

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vx = 1 * -Trig::sin(angle_2);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
			tmp.set(Row4::i1, tmpi1);

			current = current * tmp;

			//Y
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */
			tmp.set(Special::Identity);

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			current = current * tmp;

		}

		else if (mode == Rot3::YXZ)
		{
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */
			//current
			this->_m0 = this->_m0 * Trig::cos(angle_1);
			this->_m2 = 1 * -Trig::sin(angle_1);
			this->_m8 = 1 * Trig::sin(angle_1);
			this->_m10 = this->_m10 * Trig::cos(angle_1);
			current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
			current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */
			//tmp
			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
			tmpi1._vz = 1 * Trig::sin(angle_0);
			tmp.set(Row4::i1, tmpi1);

			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vy = 1 * -Trig::sin(angle_0);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
			tmp.set(Row4::i2, tmpi2);

			current = current * tmp;

			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */
			tmp.set(Special::Identity);

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
			tmpi0._vy = 1 * Trig::sin(angle_2);
			tmp.set(Row4::i0, tmpi0);

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vx = 1 * -Trig::sin(angle_2);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
			tmp.set(Row4::i1, tmpi1);

			current = current * tmp;
		}

		else if (mode == Rot3::YZX)
		{
			//current Y
						/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m0 = this->_m0 * Trig::cos(angle_1);
			this->_m2 = 1 * -Trig::sin(angle_1);
			this->_m8 = 1 * Trig::sin(angle_1);
			this->_m10 = this->_m10 * Trig::cos(angle_1);
			current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
			current.set(Row4::i2, Vec4(this->_m8, this->_m9, this->_m10, this->_m11));

			//tmp Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_2);
			tmpi0._vy = 1 * Trig::sin(angle_2);
			tmp.set(Row4::i0, tmpi0);

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vx = 1 * -Trig::sin(angle_2);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_2);
			tmp.set(Row4::i1, tmpi1);

			//multiply current and tmp to get new current
			current = current * tmp;

			//new tmp identity X
			tmp.set(Special::Identity);

			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
			tmpi1._vz = 1 * Trig::sin(angle_0);
			tmp.set(Row4::i1, tmpi1);

			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vy = 1 * -Trig::sin(angle_0);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp
			current = current * tmp;

		}

		else if (mode == Rot3::ZXY)
		{
			//current Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m0 = this->_m0 * Trig::cos(angle_2);
			this->_m1 = 1 * Trig::sin(angle_2);
			this->_m4 = 1 * -Trig::sin(angle_2);
			this->_m5 = this->_m5 * Trig::cos(angle_2);
			current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));

			//tmp X
			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */


			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
			tmpi1._vz = 1 * Trig::sin(angle_0);
			tmp.set(Row4::i1, tmpi1);

			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vy = 1 * -Trig::sin(angle_0);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp to get new current
			current = current * tmp;

			//new tmp identity Y
			tmp.set(Special::Identity);
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp
			current = current * tmp;
		}

		//(mode == Rot3::ZYX)
		else
		{
			//current Z
			/*     | cos$  sin$  m2   m3  | */
			/* m = | -sin$ cos$  m6   m7  | */
			/*     | m8  m9  m10  m11 | */
			/*     | m12 m13 m14  m15 | */

			this->_m0 = this->_m0 * Trig::cos(angle_2);
			this->_m1 = 1 * Trig::sin(angle_2);
			this->_m4 = 1 * -Trig::sin(angle_2);
			this->_m5 = this->_m5 * Trig::cos(angle_2);
			current.set(Row4::i0, Vec4(this->_m0, this->_m1, this->_m2, this->_m3));
			current.set(Row4::i1, Vec4(this->_m4, this->_m5, this->_m6, this->_m7));

			//tmp Y
			/*     | cos$  m1  -sin$   m3  | */
			/* m = | m4  1  m6   m7  | */
			/*     | sin$  m9  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */

			tmpi0 = tmp.get(Row4::i0);
			tmpi0._vx = tmpi0._vx * Trig::cos(angle_1);
			tmpi0._vz = 1 * -Trig::sin(angle_1);
			tmp.set(Row4::i0, tmpi0);
			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vx = 1 * Trig::sin(angle_1);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_1);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp to get new current
			current = current * tmp;

			//new tmp identity X
			tmp.set(Special::Identity);

			/*     | 1  m1  m2   m3  | */
			/* m = | m4  cos$  sin$   m7  | */
			/*     | m8  -sin$  cos$  m11 | */
			/*     | m12 m13 m14  m15 | */


			tmpi1 = tmp.get(Row4::i1);
			tmpi1._vy = tmpi1._vy * Trig::cos(angle_0);
			tmpi1._vz = 1 * Trig::sin(angle_0);
			tmp.set(Row4::i1, tmpi1);

			tmpi2 = tmp.get(Row4::i2);
			tmpi2._vy = 1 * -Trig::sin(angle_0);
			tmpi2._vz = tmpi2._vz * Trig::cos(angle_0);
			tmp.set(Row4::i2, tmpi2);

			//multiply current and tmp
			current = current * tmp;
		}

		tmpi0 = current.get(Row4::i0);
		tmpi1 = current.get(Row4::i1);
		tmpi2 = current.get(Row4::i2);

		this->_m0 = tmpi0._vx;
		this->_m1 = tmpi0._vy;
		this->_m2 = tmpi0._vz;

		this->_m4 = tmpi1._vx;
		this->_m5 = tmpi1._vy;
		this->_m6 = tmpi1._vz;

		this->_m8 = tmpi2._vx;
		this->_m9 = tmpi2._vy;
		this->_m10 = tmpi2._vz;
	}

	void Rot::set(const Axis mode, const Vec3& vAxis, const float angle_radians)
	{
		const float angle_a = 0.5f * angle_radians;
		float cos_a;
		float sin_a;

		Trig::cossin(cos_a, sin_a, angle_a);

		Vec3 qV = vAxis.getNorm();

		qV *= sin_a;

		Vec4 Q;
		Q[x] = qV[x];
		Q[y] = qV[y];
		Q[z] = qV[z];
		Q[w] = cos_a;

		// this function has been transposed
		float x2, y2, z2;
		float xx, xy, xz;
		float yy, yz, zz;
		float wx, wy, wz;

		// ADD test to make sure that quat is normalized

		x2 = Q[x] + Q[x];
		y2 = Q[y] + Q[y];
		z2 = Q[z] + Q[z];

		xx = Q[x] * x2;
		xy = Q[x] * y2;
		xz = Q[x] * z2;

		yy = Q[y] * y2;
		yz = Q[y] * z2;
		zz = Q[z] * z2;

		wx = Q[w] * x2;
		wy = Q[w] * y2;
		wz = Q[w] * z2;

		this->_m0 = 1.0f - (yy + zz);
		this->_m1 = xy + wz;
		this->_m2 = xz - wy;
		this->_m3 = 0.0f;

		this->_m4 = xy - wz;
		this->_m5 = 1.0f - (xx + zz);
		this->_m6 = yz + wx;
		this->_m7 = 0.0f;

		this->_m8 = xz + wy;
		this->_m9 = yz - wx;
		this->_m10 = 1.0f - (xx + yy);
		this->_m11 = 0.0f;

		this->_v3.set(0.0f, 0.0f, 0.0f, 1.0f);

		AZUL_REPLACE_ME_STUB(mode);
		AZUL_REPLACE_ME_STUB(vAxis);
		AZUL_REPLACE_ME_STUB(angle_radians);
	}

	void Rot::set(const Orient type, const Vec3& dof, const Vec3& up)
	{
		if (type == Orient::LocalToWorld)
		{
			const Vec3 rz = dof.getNorm();

			/* find rx */
			Vec3 rx = up.cross(rz);
			rx.norm();

			/* find ry */
			Vec3 ry = rz.cross(rx);
			ry.norm();

			Mat4::set(Vec4(rx, 0), Vec4(ry, 0), Vec4(rz, 0), Vec4(0.0f, 0.0f, 0.0f, 1.0f));
			this->_m3 = 0.0f;
			this->_m7 = 0.0f;
			this->_m11 = 0.0f;
			this->_m15 = 1.0f;
		}

		//WorldToLocal
		else
		{
			const Vec3 rz = dof.getNorm();

			/* find rx */
			Vec3 rx = up.cross(rz);
			rx.norm();

			/* find ry */
			Vec3 ry = rz.cross(rx);
			ry.norm();


			Mat4::set(Vec4(rx, 0), Vec4(ry, 0), Vec4(rz, 0), Vec4(0.0f, 0.0f, 0.0f, 1.0f));

			this->_m3 = 0.0f;
			this->_m7 = 0.0f;
			this->_m11 = 0.0f;
			this->_m15 = 1.0f;

			Mat4 tmp = Mat4::getInv();


			Vec3 tmpi0, tmpi1, tmpi2;
			tmpi0 = tmp.get(Row4::i0);
			tmpi1 = tmp.get(Row4::i1);
			tmpi2 = tmp.get(Row4::i2);

			Mat4::set(Vec4(tmpi0, 0), Vec4(tmpi1, 0), Vec4(tmpi2, 0), Vec4(0.0f, 0.0f, 0.0f, 1.0f));
		}
	}

}

// ---  End of File ---