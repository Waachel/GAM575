//----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------

#include "MathEngine.h"
#include "GameObject.h"
#include "Game.h"
#include "Camera.h"

// HACK FEST --- will eventually be in managers/singleton
extern ID3D11Device *pHackDevice;
extern ID3D11DeviceContext *pHackDeviceContext;
extern Camera *pHackCamera;

namespace Azul
{

	GameObject::GameObject(GraphicsObject *pGraphicsObject)
		: poPos{new Vec3(0,0,0)},
		poGraphicsObject(pGraphicsObject),
		scale(1.0f)
	{
		assert(pGraphicsObject);
		assert(poPos);

		this->poWorld = new Mat4(Special::Identity);
		assert(this->poWorld);

	}
	void GameObject::SetScale(float v)
	{
		this->scale = v;
	}

void GameObject::privUpdate(float currentTime)
	{
		AZUL_UNUSED_VAR(currentTime);
		static float angle = 0.0f;
		angle += 0.01f;
		Trans T(poPos->x(), poPos->y(), poPos->z());
		Scale S(scale, scale, scale);
		Rot R(Rot1::Z, angle);
		*this->poWorld = S * R * T;
	}

	GameObject::~GameObject()
	{
		delete this->poPos;
		delete this->poGraphicsObject;
		delete this->poWorld;
	}

	Mat4 *GameObject::GetWorld()
	{
		return this->poWorld;
	}

	void GameObject::SetPos(Vec3 v)
	{
		poPos->set(v);
	}

	void GameObject::Update(float currentTime)
	{
		// Update the world matrix
		this->privUpdate(currentTime);

		// Push to graphics object
		this->poGraphicsObject->SetWorld(*this->poWorld);
	}

	void GameObject::SetWorld(Mat4 *world)
	{
		assert(world);
		*this->poWorld = *world;
	}


	void GameObject::Draw()
	{
		// ---------------------------------------------
		//  Transfer data to the constant buffer
		//    CPU ---> GPU
		//    World, View, Projection Matrix
		//    Set Shader
		//    Render
		// ---------------------------------------------
		this->poGraphicsObject->Render();

	}

}

// --- End of File ---
