//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "_UnitTestConfiguration.h"

#include "Dog.h"
#include "Dog.pb.h"

//-------------------------------------------
//       ---> DO NOT MODIFY <---
//-------------------------------------------

TEST_WITH_TEARDOWN(Animal_Class, TestConfig::ALL)
{
#if Animal_Class

	CHECK(sizeof(Animal) == 12);
	CHECK(sizeof(Dog) == 24);

	Dog dA(99.9f, 88.8f, 77.7f, 11.1f, 22.2f, 33.3f);
	dA.Print("orig");

	CHECK(dA.a == 99.9f);
	CHECK(dA.b == 88.8f);
	CHECK(dA.c == 77.7f);
	CHECK(dA.x == 11.1f);
	CHECK(dA.y == 22.2f);
	CHECK(dA.z == 33.3f);

	Dog_proto dA_proto;
	dA.Serialize(dA_proto);

	size_t serialSize = dA_proto.ByteSizeLong();
	CHECK(serialSize <= 32);

	Dog dB;
	dB.Deserialize(dA_proto);
	dB.Print("proto");

	Trace::out("\n");

	CHECK(dA.a == dB.a);
	CHECK(dA.b == dB.b);
	CHECK(dA.c == dB.c);
	CHECK(dA.x == dB.x);
	CHECK(dA.y == dB.y);
	CHECK(dA.z == dB.z);


#endif
} TEST_END

TEST_TEARDOWN(Animal_Class)
{

}

// ---  End of File ---
