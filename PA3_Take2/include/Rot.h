//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef ENGINE_MATH_ROT_4x4_H
#define ENGINE_MATH_ROT_4x4_H

#include "Mat4.h"
#include "Quat.h"

namespace Azul
{
	class Rot final : public Mat4
	{
	public:

		// Do your magic here

		//// Big 4
		Rot();
		Rot(const Rot &tM) = default;
		~Rot() = default;

		// Big 6
		Rot(Rot &&) = default;
		Rot &operator = (Rot &&) = default;

		Rot& operator = (const Mat4&);
		Rot operator*(const Quat& q) const;

		Rot operator*(const Rot& q) const;

		Rot operator*(const Mat4& q) const;

		explicit Rot(const Mat4 &);
		explicit Rot(const Special type);
		explicit Rot(const Quat &);

		Rot(const Rot1 type, const float angle);
		Rot(const Rot3 mode, const float angle_0, const float angle_1, const float angle_2);
		Rot(const Axis mode, const Vec3 &vAxis, const float angle_radians);
		Rot(const Orient type, const Vec3 &dof, const Vec3 &up);

		void set(const Rot1 type, const float angle);
		void set(const Rot3 mode, const float angle_0, const float angle_1, const float angle_2);
		void set(const Axis mode, const Vec3 &vAxis, const float angle_radians);
		void set(const Orient, const Vec3 &dof, const Vec3 &up);
		void set(const Quat& q);
		void set(const Special type);

	private:


	};
}

#endif

//--- End of File ---
