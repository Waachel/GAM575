//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "_UnitTestConfiguration.h"
#include "MathEngine.h"

using namespace Azul;


//---------------------------------------------------------------------------
// TESTS:
//---------------------------------------------------------------------------

TEST(Quat_ConstantPlusQuat, TestConfig::ALL)
{
#if Quat_ConstantPlusQuat

	Quat q1;
	Quat out1;

	// Constant + Quat
	q1.set(1.0f, 2.0f, 3.0f, 4.0f);

	// => out1 = 10.0f + q1 
	out1 = 10.0f + q1;

	CHECK((out1[x] == 11.0f));
	CHECK((out1[y] == 12.0f));
	CHECK((out1[z] == 13.0f));
	CHECK((out1[w] == 14.0f));

	CHECK(q1[x] == 1.0f);
	CHECK(q1[y] == 2.0f);
	CHECK(q1[z] == 3.0f);
	CHECK(q1[w] == 4.0f);

#endif
} TEST_END

// --- End of File ---