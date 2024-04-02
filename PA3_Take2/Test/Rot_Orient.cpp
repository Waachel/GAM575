//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

//---------------------------------------------------------------------------
// HEADER FILES:
//---------------------------------------------------------------------------

#include "_UnitTestConfiguration.h"
#include "MathEngine.h"

using namespace Azul;

//---------------------------------------------------------------------------
// TESTS:
//---------------------------------------------------------------------------

TEST(Rot_Orient, TestConfig::ALL)
{
#if Rot_Orient

	// Orientation Type Constructor:
	Vec3  v15(2.0f, 53.0f, 24.0f);
	Vec3  v16(0.0f, -24.0f, 53.0f);
	Rot r56(Orient::LocalToWorld, v15, v16);

	CHECK(eq_float(r56[m0], -0.9994f));
	CHECK(eq_float(r56[m1], 0.0313f));
	CHECK(eq_float(r56[m2], 0.0142f));
	CHECK((r56[m3] == 0.0f));
	CHECK(eq_float(r56[m4], 0.0000f));
	CHECK(eq_float(r56[m5], -0.4125f));
	CHECK(eq_float(r56[m6], 0.9110f));
	CHECK((r56[m7] == 0.0f));
	CHECK(eq_float(r56[m8], 0.0344f));
	CHECK(eq_float(r56[m9], 0.9104f));
	CHECK(eq_float(r56[m10], 0.4123f));
	CHECK((r56[m11] == 0.0f));
	CHECK((r56[m12] == 0.0f));
	CHECK((r56[m13] == 0.0f));
	CHECK((r56[m14] == 0.0f));
	CHECK(eq_float(r56[m15],1.0f));

#endif
} TEST_END

// --- End of File ---
