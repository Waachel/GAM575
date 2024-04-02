//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef ENGINE_MATH_SCALE_4x4_H
#define ENGINE_MATH_SCALE_4x4_H

#include "Mat4.h"

namespace Azul
{
	class Scale final : public Mat4
	{
	public:

		// Do your magic here

		//// Big 4
		Scale();
		Scale &operator = (const Scale &A) = default;
		Scale(const Scale &tM) = default;
		~Scale() = default;

		//// Big 6
		Scale(Scale &&) = default;
		Scale &operator = (Scale &&) = default;
		Scale& operator = (Mat4&&);

		//// Constructors
		Scale(const float sx, const float sy, const float sz);
		Scale(const Vec3 &vScale);

		//// Set 
		void set(const float sx, const float sy, const float sz);
		void set(const Vec3 &vScale);

	};
}

#endif

//--- End of File ---
