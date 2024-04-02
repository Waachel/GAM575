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

TEST(Mat4_TimesEqual_Quat, TestConfig::ALL)
{
#if	Mat4_TimesEqual_Quat


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

	Quat Q1(Rot3::ZXY, MATH_PI3, -MATH_2PI8, MATH_2PI3);

	CHECK(eq_float(Q1[x], -0.0560f));
	CHECK(eq_float(Q1[y], -0.5657f));
	CHECK(eq_float(Q1[z], 0.7885f));
	CHECK(eq_float(Q1[w], 0.2343f));


	A *= Q1;

	CHECK(eq_float(Q1[x], -0.0560f));
	CHECK(eq_float(Q1[y], -0.5657f));
	CHECK(eq_float(Q1[z], 0.7885f));
	CHECK(eq_float(Q1[w], 0.2343f));

	CHECK(eq_float(A[m0], -2.5569f));
	CHECK(eq_float(A[m1], -2.6650f));
	CHECK(eq_float(A[m2], -0.5996f));
	CHECK(eq_float(A[m3], 4.0000f));
	CHECK(eq_float(A[m4], -8.7314f));
	CHECK(eq_float(A[m5], -5.3971f));
	CHECK(eq_float(A[m6], -2.1525f));
	CHECK(eq_float(A[m7], 8.0000f));
	CHECK(eq_float(A[m8], -14.9058f));
	CHECK(eq_float(A[m9], -8.1291f));
	CHECK(eq_float(A[m10], -3.7055f));
	CHECK(eq_float(A[m11], 12.0000f));
	CHECK(eq_float(A[m12], -21.0803f));
	CHECK(eq_float(A[m13], -10.8612f));
	CHECK(eq_float(A[m14], -5.2584f));
	CHECK(eq_float(A[m15], 16.0000f));

#endif
} TEST_END

// ---  End of File ---------------
