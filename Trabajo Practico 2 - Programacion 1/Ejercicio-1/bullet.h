#pragma once
#include "Vector2.h"

class Bullet
{


private:
	Vector2 playerPos;
	static int activeInstances;
public:
	Bullet();
	Bullet(Vector2 playerPos);
	~Bullet();
	void show();
	void hide();
	Vector2 getXY();
	static int getActiveInstances();
};
