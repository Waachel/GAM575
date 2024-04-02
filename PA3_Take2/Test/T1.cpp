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

TEST(Rot_Times_Mat4, TestConfig::ALL)
{
#if Rot_Times_Mat4

	// Orientation Type Constructor:
	Rot R1(Rot3::ZXY, MATH_PI3, -MATH_2PI8, MATH_2PI3);
	
	CHECK( eq_float(R1[m0],-0.8838f) );
	CHECK( eq_float(R1[m1], 0.4330f) );
	CHECK( eq_float(R1[m2], 0.1767f) );
	CHECK( (R1[m3] == 0.0f) );
	CHECK( eq_float(R1[m4], -0.3061f) );
	CHECK( eq_float(R1[m5], -0.2500f) );
	CHECK( eq_float(R1[m6], -0.9185f) );
	CHECK( (R1[m7] == 0.0f) );
	CHECK( eq_float(R1[m8], -0.3535f) );
	CHECK( eq_float(R1[m9], -0.8660f) );
	CHECK( eq_float(R1[m10], 0.3535f) );
	CHECK( (R1[m11] == 0.0f) );
	CHECK( (R1[m12] == 0.0f) );
	CHECK( (R1[m13] == 0.0f) );
	CHECK( (R1[m14] == 0.0f) );
	CHECK( eq_float(R1[m15],1.0f) );

	Vec4 v0(1.0f, 2.0f, 3.0f, 4.0f);
	Vec4 v1(5.0f, 6.0f, 7.0f, 8.0f);
	Vec4 v2(9.0f, 10.0f, 11.0f, 12.0f);
	Vec4 v3(13.0f, 14.0f, 15.0f, 16.0f);
	Vec4 v4(10.0f, 20.0f, 30.0f, 40.0f);
	Vec4 v5(50.0f, 60.0f, 70.0f, 80.0f);
	Vec4 v6(90.0f, 100.0f, 110.0f, 120.0f);
	Vec4 v7(130.0f, 140.0f, 150.0f, 160.0f);

	Mat4 A(v0, v1, v2, v3);

	CHECK((A[m0] == 1.0f));
	CHECK((A[m1] == 2.0f));
	CHECK((A[m2] == 3.0f));
	CHECK((A[m3] == 4.0f));
	CHECK((A[m4] == 5.0f));
	CHECK((A[m5] == 6.0f));
	CHECK((A[m6] == 7.0f));
	CHECK((A[m7] == 8.0f));
	CHECK((A[m8] == 9.0f));
	CHECK((A[m9] == 10.0f));
	CHECK((A[m10] == 11.0f));
	CHECK((A[m11] == 12.0f));
	CHECK((A[m12] == 13.0f));
	CHECK((A[m13] == 14.0f));
	CHECK((A[m14] == 15.0f));
	CHECK(eq_float(A[m15], 16.0f));

	Mat4 C;
	C = R1 * A;

	CHECK(eq_float(R1[m0], -0.8838f));
	CHECK(eq_float(R1[m1], 0.4330f));
	CHECK(eq_float(R1[m2], 0.1767f));
	CHECK((R1[m3] == 0.0f));
	CHECK(eq_float(R1[m4], -0.3061f));
	CHECK(eq_float(R1[m5], -0.2500f));
	CHECK(eq_float(R1[m6], -0.9185f));
	CHECK((R1[m7] == 0.0f));
	CHECK(eq_float(R1[m8], -0.3535f));
	CHECK(eq_float(R1[m9], -0.8660f));
	CHECK(eq_float(R1[m10], 0.3535f));
	CHECK((R1[m11] == 0.0f));
	CHECK((R1[m12] == 0.0f));
	CHECK((R1[m13] == 0.0f));
	CHECK((R1[m14] == 0.0f));
	CHECK(eq_float(R1[m15], 1.0f));

	CHECK((A[m0] == 1.0f));
	CHECK((A[m1] == 2.0f));
	CHECK((A[m2] == 3.0f));
	CHECK((A[m3] == 4.0f));
	CHECK((A[m4] == 5.0f));
	CHECK((A[m5] == 6.0f));
	CHECK((A[m6] == 7.0f));
	CHECK((A[m7] == 8.0f));
	CHECK((A[m8] == 9.0f));
	CHECK((A[m9] == 10.0f));
	CHECK((A[m10] == 11.0f));
	CHECK((A[m11] == 12.0f));
	CHECK((A[m12] == 13.0f));
	CHECK((A[m13] == 14.0f));
	CHECK((A[m14] == 15.0f));
	CHECK(eq_float(A[m15], 16.0f));

	CHECK(eq_float(C[m0],   2.8721f));
	CHECK(eq_float(C[m1],   2.5980f));
	CHECK(eq_float(C[m2],   2.3239f));
	CHECK(eq_float(C[m3],   2.0498f));
	CHECK(eq_float(C[m4],  -9.8232f));
	CHECK(eq_float(C[m5],  -11.297f));
	CHECK(eq_float(C[m6],  -12.772f));
	CHECK(eq_float(C[m7],  -14.247f));
	CHECK(eq_float(C[m8],  -1.5017f));
	CHECK(eq_float(C[m9],  -2.3677f));
	CHECK(eq_float(C[m10], -3.2337f));
	CHECK(eq_float(C[m11], -4.0997f));
	CHECK(eq_float(C[m12], 13.000f));
	CHECK(eq_float(C[m13], 14.000f));
	CHECK(eq_float(C[m14], 15.000f));
	CHECK(eq_float(C[m15], 16.000f));

#endif
} TEST_END

// ---  End of File ---------------