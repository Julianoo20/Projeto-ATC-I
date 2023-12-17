#ifndef DEFENSES_H
#define DEFENSES_H
#include "Cannon.h"

struct DefenseBlock {
	PosXY posDefenses;
	bool active; // indica se o bloco está ativo ou não


};
class Defenses {
private:
	DefenseBlock defenseBlock[3]; //vetor com 3 blocos de defesa
public:
	Defenses(PosXY posInit);
	void drawDefense();


	
};





#endif