#include "bullet.h"
#include <iostream>

using namespace std;

Bullet::Bullet()
{
	Vector2 playerPos = { 0,0 };
	cout << "se creo una bala estandar" << endl;
}
Bullet::Bullet(Vector2 playerPos)
{
	this->playerPos = playerPos;
	cout << "se creo una bala personalizada" << endl;
}
Bullet::~Bullet()
{

}
void Bullet::show()
{

}
void Bullet::hide()
{

}
Vector2 Bullet::getXY()
{
	return playerPos;
}
static int getActiveInstances()
{

}