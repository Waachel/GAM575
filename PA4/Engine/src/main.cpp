//--------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//--------------------------------------------------------------

#include "Game.h"
#include "google\protobuf\message_lite.h"

using namespace Azul;

// HACK
Game* poGame = nullptr;

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE prevInstance, LPWSTR cmdLine, int cmdShow)
{
	// Verify that the version of the library that we linked against is
	// compatible with the version of the headers we compiled against.
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	Test::RunTests();

	int ValueReturn;

	poGame = new Game("PA4", 2 * 400, 2 * 300);
	ValueReturn = poGame->wWinMain(hInstance, prevInstance, cmdLine, cmdShow);

	delete poGame;

	// clean shut down
	google::protobuf::ShutdownProtobufLibrary();

	return ValueReturn;
}

// --- End of File ---
