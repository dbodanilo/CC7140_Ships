// ----------------------------------------------------------------
// From Game Programming in C++ by Sanjay Madhav
// Copyright (C) 2017 Sanjay Madhav. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once

#include "SDL/SDL.h"
#include "Actor.h"

class Ship : public Actor
{
	//as Ship will be controlled, it needs proper methods for it
public:
	Ship(class Game* game);
	void UpdateActor(float deltaTime) override;
	void ProcessKeyboard(const uint8_t* state);
	float GetRightSpeed() const { return mRightSpeed; }
	float GetDownSpeed() const { return mDownSpeed; }
	float GetWidth() const { return mWidth; }
	float GetHeight() const { return mHeight; }
private:
	float mRightSpeed;
	float mDownSpeed;
	float mWidth;
	float mHeight;
};