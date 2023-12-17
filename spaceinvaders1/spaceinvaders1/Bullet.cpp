#include "Bullet.h"


Bullet::Bullet(const PosXY& posBullet) :posBullet(posBullet) {

}
PosXY Bullet::bulletGetPosition() {

	return posBullet;
}