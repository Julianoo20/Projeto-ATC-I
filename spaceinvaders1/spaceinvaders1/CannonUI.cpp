#include <iostream>
#include <stdio.h>
#include <curses.h>
#include "Cannon.h"
#include "CannonUI.h"
#include "string.h"
#include "defenses.h"
#include "Bullet.h"
#include <vector>

PosXY CannonUI::drawCannon() {
	

	PosXY p = getPosition(); // movemos para a variavel p a posição inicial do canhao, assim iremos estar a mexer com p para nao interferi na posInit

	// desenhar um retangulo de acordo com as dimensões
	
	mvprintw(p.y, p.x, "C");
	int ch = getch();
	switch (ch) {
	case KEY_LEFT:
		return p = move('l');
		break;
	case KEY_RIGHT:
		return p = move('r');
		break;
	case ' ':

		shoot('s');
	}
	
	return p;
	
 }