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

TEST(Mat4_Times_Scale, TestConfig::ALL)
{
#if Mat4_Times_Scale

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

	Scale S(3, 4, 5);

	CHECK(S[m0] == 3.0f);
	CHECK(S[m1] == 0.0f);
	CHECK(S[m2] == 0.0f);
	CHECK(S[m3] == 0.0f);
	CHECK(S[m4] == 0.0f);
	CHECK(S[m5] == 4.0f);
	CHECK(S[m6] == 0.0f);
	CHECK(S[m7] == 0.0f);
	CHECK(S[m8] == 0.0f);
	CHECK(S[m9] == 0.0f);
	CHECK(S[m10] == 5.0f);
	CHECK(S[m11] == 0.0f);
	CHECK(S[m12] == 0.0f);
	CHECK(S[m13] == 0.0f);
	CHECK(S[m14] == 0.0f);
	CHECK(eq_float(S[m15], 1.0f));

	Mat4 C;
	C = A * S;

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

	CHECK(S[m0] == 3.0f);
	CHECK(S[m1] == 0.0f);
	CHECK(S[m2] == 0.0f);
	CHECK(S[m3] == 0.0f);
	CHECK(S[m4] == 0.0f);
	CHECK(S[m5] == 4.0f);
	CHECK(S[m6] == 0.0f);
	CHECK(S[m7] == 0.0f);
	CHECK(S[m8] == 0.0f);
	CHECK(S[m9] == 0.0f);
	CHECK(S[m10] == 5.0f);
	CHECK(S[m11] == 0.0f);
	CHECK(S[m12] == 0.0f);
	CHECK(S[m13] == 0.0f);
	CHECK(S[m14] == 0.0f);
	CHECK(eq_float(S[m15], 1.0f));

	CHECK(eq_float(C[m0], 3.0f));
	CHECK(eq_float(C[m1], 8.0f));
	CHECK(eq_float(C[m2], 15.0f));
	CHECK(eq_float(C[m3], 4.0f));
	CHECK(eq_float(C[m4], 15.0f));
	CHECK(eq_float(C[m5], 24.0f));
	CHECK(eq_float(C[m6], 35.0f));
	CHECK(eq_float(C[m7], 8.0f));
	CHECK(eq_float(C[m8], 27.0f));
	CHECK(eq_float(C[m9], 40.0f));
	CHECK(eq_float(C[m10], 55.0f));
	CHECK(eq_float(C[m11], 12.0f));
	CHECK(eq_float(C[m12], 39.0f));
	CHECK(eq_float(C[m13], 56.0f));
	CHECK(eq_float(C[m14], 75.0f));
	CHECK(eq_float(C[m15], 16.0f));

#endif
} TEST_END

// ---  End of File ---------------
