#ifndef  CANNON_H
#define CANNON_H
#include "Bullet.h"
#include <list>

using namespace std;


class Cannon {
private:
	PosXY posInitCannon;
	float width, height;
	list<Bullet> bulletList;

	
public:
	Cannon(PosXY posInitCannon, float width, float height);
	PosXY move(char k);
	PosXY getPosition();
	void shoot(char k);



	
};































#endif // ! CANNON_H
