#ifndef BULLET_H
#define BULLET_H


//struct PosXY;
struct PosXY {
	float x, y;
};

class Bullet {
private:
	PosXY posBullet;
public:
	Bullet(const PosXY& posBullet);
	PosXY bulletGetPosition();

};


#endif
