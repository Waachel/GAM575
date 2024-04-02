//--------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//--------------------------------------------------------------

#include <d3d11.h>
#include <d3dcompiler.h>
#include <WinUser.h>
#include "Game.h"
#include "Engine.h"
#include "MathEngine.h"
#include "CameraNodeMan.h"
#include "Colors.h"
#include "GameObject.h"
#include "ShaderObject.h"
#include "ShaderObject_ColorByVertex.h"
#include "ShaderObject_FlatTexture.h"
#include "ShaderObject_LightTexture.h"
#include "ShaderObject_ConstColor.h"
#include "Mesh.h"
#include "MeshCross.h"
#include "MeshCube.h"
#include "MeshPyramid.h"
#include "MeshSphere.h"
#include "MeshProto.h"
#include "MeshDiamond.h"
#include "GraphicsObject_ColorByVertex.h"
#include "GraphicsObject_Wireframe.h"
#include "GraphicsObject_Solid.h"
#include "GraphicsObject_FlatTexture.h"
#include "GraphicsObject_LightTexture.h"
#include "GraphicsObject_ConstColor.h"
#include "GraphicsObject_ConstColorSolid.h"
#include "GameObjectMan.h"
#include "MeshNodeMan.h"
#include "ShaderObjectNodeMan.h"
#include "TextureObject.h"
#include "TextureProto.h"
#include "TexNodeMan.h"


using namespace Azul;

// HACK FEST --- will eventually be in managers/singleton
ID3D11Device *pHackDevice;
ID3D11DeviceContext *pHackDeviceContext;
Camera *pHackCamera;
CameraNode* pCam2;
Camera* pCam;


// Demo
Vec3 Orig_up;
Vec3 Orig_tar;
Vec3 Orig_pos;
Vec3 Orig_upNorm;
Vec3 Orig_forwardNorm;
Vec3 Orig_RightNorm;


Game::Game(const char *const pName, int width, int height)
	: Engine(pName, width, height)
{
	mTimer.Reset();
}

Game::~Game()
{
}

//-----------------------------------------------------------------------------
// Game::LoadContent()
//		Allows you to load all content needed for your engine,
//	    such as objects, graphics, etc.
//-----------------------------------------------------------------------------
bool Game::LoadContent()
{
	ShaderObjectNodeMan::Create();
	MeshNodeMan::Create();
	GameObjectMan::Create();
	CameraNodeMan::Create();
	TexNodeMan::Create();

	// ---------------------------------
	//  Camera - Setup
	// ---------------------------------
	{
		pHackCamera = new Camera();
		assert(pHackCamera);

		Vec3 camPos(0, -100, 2);
		Vec3 tarVect(0, 0, 0);
		Vec3 upVect(0, 1, 0);

		pHackCamera->setOrientAndPosition(upVect, tarVect, camPos);
		pHackCamera->setPerspective(50.0f, GetAspectRatio(), 0.1f, 1000.0f);
		pHackCamera->SetName(Camera::Name::CAMERA_1);
		CameraNodeMan::Add(pHackCamera);

		Camera* pCamera2 = new Camera();
		assert(pCamera2);

		Vec3 camPos2(10, 5, 8);
		Vec3 tarVect2(0, -1, 2);
		Vec3 upVect2(0, 1, 0);

		pCamera2->setOrientAndPosition(upVect, tarVect, camPos2);
		pCamera2->setPerspective(50.0f, GetAspectRatio(), 0.1f, 1000.0f);
		pCamera2->SetName(Camera::Name::CAMERA_2);
		CameraNodeMan::Add(pCamera2);

		Camera* pCamera3 = new Camera();
		assert(pCamera3);

		Vec3 camPos3(10, 1, -8);
		Vec3 tarVect3(0, -1, 2);
		Vec3 upVect3(0, 1, 0);

		pCamera3->setOrientAndPosition(upVect, tarVect, camPos3);
		pCamera3->setPerspective(50.0f, GetAspectRatio(), 0.1f, 1000.0f);
		pCamera3->SetName(Camera::Name::CAMERA_3);
		CameraNodeMan::Add(pCamera3);

		Camera* pCamera4 = new Camera();
		assert(pCamera4);

		Vec3 camPos4(0, -1, 12);
		Vec3 tarVect4(0, 0, 1);
		Vec3 upVect4(0, -1, 0);

		pCamera4->setOrientAndPosition(upVect, tarVect, camPos4);
		pCamera4->setPerspective(50.0f, GetAspectRatio(), 0.1f, 1000.0f);
		pCamera4->SetName(Camera::Name::CAMERA_4);
		CameraNodeMan::Add(pCamera4);

		CameraNodeMan::SetCurrentCam(Camera::Name::CAMERA_1);
	}

	// ------------------------------------------
	//   Model + Shaders --> GraphicsObject
	// -------------------------------------------
	{
		// ---------------------------------
		//  Model - Cube
		// ---------------------------------

		Mesh *poMeshB = new MeshPyramid();
		assert(poMeshB);

		MeshNodeMan::Add(Mesh::Name::PYRAMID, poMeshB);

		Mesh *pSpaceFrigateMesh = new MeshProto("space_frigate.proto.azul");
		//Mesh* pSpaceFrigateMesh = new MeshProto("spaceV3.proto.azul");
		MeshNodeMan::Add(Mesh::Name::SPACE_FRIGATE, pSpaceFrigateMesh);

		TextureObject *pTexCrate = new TextureProto("space_frigate.proto.azul");
		TexNodeMan::Add(TextureObject::Name::SpaceFrigate, pTexCrate);

		//MeshNodeMan::Dump();

		// --------------------------------
		//  ShaderObject  ColorByVertex
		// --------------------------------
		ShaderObject *poShaderA = new ShaderObject_ColorByVertex(ShaderObject::Name::ColorByVertex);
		ShaderObjectNodeMan::Add(poShaderA);

		ShaderObject *poShaderB = new ShaderObject_FlatTexture(ShaderObject::Name::FlatTexture);
		ShaderObjectNodeMan::Add(poShaderB);

		ShaderObject *poShaderC = new ShaderObject_LightTexture(ShaderObject::Name::LightTexture);
		ShaderObjectNodeMan::Add(poShaderC);

		ShaderObject *poShaderD = new ShaderObject_ConstColor(ShaderObject::Name::ConstColor);
		ShaderObjectNodeMan::Add(poShaderD);

		//ShaderObjectNodeMan::Dump();

		// -----------------------------------
		//  Texture
		// -----------------------------------

		TextureObject *pTexA = new TextureObject(L"space_frigate.tga");
		TexNodeMan::Add(TextureObject::Name::SpaceFrigate, pTexA);
		// --------------------------------
		//  Graphics Object -- needs model + shader
		// --------------------------------

		Vec3 LightColor(1, 0, 0);
		Vec3 LightPos(0, -100, 0);


		GraphicsObject *pGraphicsObject = new GraphicsObject_FlatTexture(pSpaceFrigateMesh,//poMeshB,
																		 poShaderB,
																		 pTexA);

		//GraphicsObject *pGraphicsObject = new GraphicsObject_Wireframe(pSpaceFrigateMesh,//poMeshB,
		//																 poShaderD,
		//																 LightColor);

		GameObject *pGameObj = new GameObject(pGraphicsObject);
		pGameObj->SetName("Dave");
		pGameObj->SetPos(Vec3(0, 0, 0));
		pGameObj->SetScale(1.0f);

		GameObjectMan::Add(pGameObj);


	}


	// squirrel for reset
	CameraNodeMan::Update();
	CameraNodeMan::GetActiveHelper(Orig_up, Orig_tar, Orig_pos, Orig_upNorm, Orig_forwardNorm, Orig_RightNorm);

	return true;
}

//-----------------------------------------------------------------------------
// Game::Update()
//      Called once per frame, update data, tranformations, etc
//      Use this function to control process order
//      Input, AI, Physics, Animation, and Graphics
//-----------------------------------------------------------------------------

Vec3 obj(0.0f, 0.0f, 0.0f);

void Game::Update(float)
{
	// ------------------------------------
	// Update the camera once per frame
	// ------------------------------------
	mTimer.Tick();
	//Camera* pCam = pHackCamera;	
	//Camera* pCam = CameraNodeMan::GetActiveCam();

	if ((GetKeyState('1') & 0x8000))
	{
		CameraNodeMan::SetCurrentCam(Camera::Name::CAMERA_1);
	}
	if ((GetKeyState('2') & 0x8000))
	{
		CameraNodeMan::SetCurrentCam(Camera::Name::CAMERA_2);
	}
	if ((GetKeyState('3') & 0x8000))
	{
		CameraNodeMan::SetCurrentCam(Camera::Name::CAMERA_3);
	}
	if ((GetKeyState('4') & 0x8000))
	{
		CameraNodeMan::SetCurrentCam(Camera::Name::CAMERA_4);
	}

	if ((GetKeyState('S') & 0x8000))
	{
		// Reset	
		obj.set(0, 0, 0);
		CameraNodeMan::SetActiveHelper(Orig_up, Orig_tar, Orig_pos);
	}

	if ((GetKeyState('W') & 0x8000))
	{
		Vec3 newObj(2, 0, 0);
		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm

		Vec3 delta = newObj - obj;

		up += delta;
		tar += delta;
		pos += delta;

		obj = newObj;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}

	if ((GetKeyState('E') & 0x8000))
	{
		Vec3 newObj(-2, 0, 0);
		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm

		Vec3 delta = newObj - obj;

		up += delta;
		tar += delta;
		pos += delta;

		obj = newObj;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}


	if ((GetKeyState('D') & 0x8000))
	{

		Vec3 newObj(0, 0, 0);
		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm
		Vec3 delta = newObj - obj;

		up += delta;
		tar += delta;
		pos += delta;

		obj = newObj;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}

	if ((GetKeyState('I') & 0x8000))
	{
		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm
		//	tar = obj;

		pos = pos + 0.03f * forwardNorm;
		//tar = tar + 0.03f * forwardNorm;
		up = up + 0.03f * forwardNorm;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}

	if ((GetKeyState('O') & 0x8000))
	{
		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm
		//tar = obj;

		pos = pos - 0.03f * forwardNorm;
		up = up - 0.03f * forwardNorm;

		CameraNodeMan::SetActiveHelper(up, tar, pos);

	}

	if ((GetKeyState(VK_RIGHT) & 0x8000))
	{

		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm
	//	tar = obj;

		Trans T1(tar);
		Trans nT1(-tar);

		Rot R1;
		R1.set(Axis::AxisAngle, upNorm, +0.03f);

		Mat4 M = nT1 * R1 * T1;

		up = Vec4(up, 1) * M;
		pos = Vec4(pos, 1) * M;
		tar = Vec4(tar, 1) * M;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}

	if ((GetKeyState(VK_LEFT) & 0x8000))
	{

		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm

	//	tar = obj;

		Trans T1(tar);
		Trans nT1(-tar);

		Rot R1;
		R1.set(Axis::AxisAngle, upNorm, -0.03f);

		Mat4 M = nT1 * R1 * T1;

		up = Vec4(up, 1) * M;
		pos = Vec4(pos, 1) * M;
		tar = Vec4(tar, 1) * M;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}

	if ((GetKeyState(VK_DOWN) & 0x8000))
	{
		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		//	tar = obj;


			// OK, now 3 points... pos, tar, up
			//     now 3 normals... upNorm, forwardNorm, rightNorm

		Trans T1(tar);
		Trans nT1(-tar);
		Rot R1;
		R1.set(Axis::AxisAngle, rightNorm, 0.03f);

		Mat4 M = nT1 * R1 * T1;

		up = Vec4(up, 1) * M;
		pos = Vec4(pos, 1) * M;
		tar = Vec4(tar, 1) * M;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}

	if ((GetKeyState(VK_UP) & 0x8000))
	{
		Vec3 pos;
		Vec3 tar;
		Vec3 up;
		Vec3 upNorm;
		Vec3 forwardNorm;
		Vec3 rightNorm;

		CameraNodeMan::GetActiveHelper(up, tar, pos, upNorm, forwardNorm, rightNorm);

		// OK, now 3 points... pos, tar, up
		//     now 3 normals... upNorm, forwardNorm, rightNorm
		//tar = obj;

		Trans T1(tar);
		Trans nT1(-tar);
		Rot R1;
		R1.set(Axis::AxisAngle, rightNorm, -0.03f);

		Mat4 M = nT1 * R1 * T1;

		up = Vec4(up, 1) * M;
		pos = Vec4(pos, 1) * M;
		tar = Vec4(tar, 1) * M;

		CameraNodeMan::SetActiveHelper(up, tar, pos);
	}

	CameraNodeMan::Update();
	GameObjectMan::Update(mTimer.TotalTime());
}

//-----------------------------------------------------------------------------
// Game::Render()
//		This function is called once per frame
//	    Use this for draw graphics to the screen.
//      Only do rendering here
//-----------------------------------------------------------------------------
void Game::Render()
{
	this->SetDefaultTargetMode();

	GameObjectMan::Draw();
}

//-----------------------------------------------------------------------------
// Game::UnLoadContent()
//       unload content (resources loaded above)
//       unload all content that was loaded before the Engine Loop started
//-----------------------------------------------------------------------------
void Game::UnloadContent()
{
	//delete poMeshA;
	//delete poShaderA;
	//delete pHackCamera;

	//delete pTexA;
	//delete pTexB;
	//delete pTexC;
	//delete pTexD;

	ShaderObjectNodeMan::Destroy();
	MeshNodeMan::Destroy();
	GameObjectMan::Destroy();
	CameraNodeMan::Destroy();
	TexNodeMan::Destroy();
}

//------------------------------------------------------------------
// Game::ClearBufferFunc()
// Allows user to change the way the clear buffer function works
// 
// Clear the color and depth buffers.
//------------------------------------------------------------------
void Game::ClearDepthStencilBuffer()
{
#ifdef _DEBUG
	const Vec4 ClearColor = Azul::Colors::LightGray;
#else
	const Vec4 ClearColor = Azul::Colors::Wheat;
#endif
	float clearDepth = 1.0f;
	uint8_t clearStencil = 0;
	g_d3dDeviceContext->ClearRenderTargetView(g_d3dRenderTargetView, (const float *)&ClearColor);
	g_d3dDeviceContext->ClearDepthStencilView(g_d3dDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, clearDepth, clearStencil);
}

// --- End of File ---
