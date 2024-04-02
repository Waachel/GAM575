//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "_UnitTestConfiguration.h"
#include "MathEngine.h"
#include "Mat4Test.h"

using namespace Azul;

// --------------------------------
// ---      DO NOT MODIFY       ---
// --------------------------------

TEST(SpeedTestE, TestConfig::ALL)
{
#if SpeedTestE

	Mat4 A;
	Rot A0;
	Scale A1;
	Mat4 A2;
	Mat4 B;
	Mat4 B2;
	Mat4 C;

	A0.set(Rot1::X, MATH_2PI3);
	A1.set(5, 10, 15);
	A = A1 * A0;

	Mat4 *pA = &A;
	Mat4 *pB = &B;

	Mat4Test *pA2 = (Mat4Test *)&A;
	Mat4Test *pB2 = (Mat4Test *)&B2;

	PerformanceTimer tA;
	PerformanceTimer tB;

	tA.Tic();
	for (int i = 0; i < 1000000; i++)
	{
		// rotate & scale
		*pB = pA->getInv();
	}
	tA.Toc();

	tB.Tic();
	for (int i = 0; i < 1000000; i++)
	{

		*pB2 = pA2->getInv2();
	}
	tB.Toc();

	Trace::out("Scale * Rotate -> M = S * R; \n");
	//Trace::out("\n");
	//Trace::out("  T_hint: %f ms\n", tA.TimeInSeconds() * 1000.0f);
	//Trace::out("  T_orig: %f ms\n", tB.TimeInSeconds() * 1000.0f);
	float ratio = (float)tB.TimeInSeconds() / (float)tA.TimeInSeconds();
	Trace::out("   ratio: %f <--\n", ratio);
	//Trace::out("\n");

	C = A * B;

	CHECK(true == C.isIdentity());

	C = A * B2;

	CHECK(true == C.isIdentity());

#if _DEBUG
	CHECK(ratio > 1.5f);
#else
	CHECK(ratio > 3.0f);
#endif

#endif
} TEST_END

// ---  End of File ---



