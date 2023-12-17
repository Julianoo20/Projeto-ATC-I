#include "Cannon.h"
#include <iostream>
#include <stdio.h>
#include <curses.h>
#include <thread>
#include <chrono>
#include "CannonUI.h"
#include "defenses.h"


Cannon::Cannon(PosXY posInitCannon, float width, float height) : posInitCannon(posInitCannon),
width(width), height(height) {

}
PosXY Cannon::move(char k) {
	switch (k) {
	case 'l':
		if (posInitCannon.x > 0) {
			posInitCannon.x -= 1;

		}
		break;
	case 'r':
		if (posInitCannon.x < COLS - 7) {
			posInitCannon.x += 1;
		}
		break;
	}
	return posInitCannon;
}
PosXY Cannon::getPosition() {
	return posInitCannon;
}

void Cannon:: shoot(char k) {
	
	if (k == 's') {
		PosXY posBullet = getPosition(); //posi��o do canh�o que criou a bala
		Bullet bullet(posBullet);
		bulletList.push_back(bullet); //adicionamos a bala criada ao fim da lista
		while (posBullet.y > 0) {
			clear();
			//isto � para tentar resolver o problema de  quando a bala est� ativa o canhao e as defesas n�o desaparecer
			mvprintw(getPosition().y, getPosition().x, "C"); //desenhar o canh�o para n�o desaparecer
			

			posBullet.y = posBullet.y -1 ;


			mvprintw(posBullet.y, posBullet.x, "B");
			refresh();
			std::this_thread::sleep_for(std::chrono::milliseconds(1));

			
		}
}

}

