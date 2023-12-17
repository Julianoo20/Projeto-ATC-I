#include "defenses.h"
#include <iostream>
#include <stdio.h>
#include <curses.h>
#include "Cannon.h"
#include "string.h"

Defenses::Defenses(PosXY posInit) {
	for (int i = 0; i < 3; i++) {
		defenseBlock[i].posDefenses = { posInit.x + i * 30, posInit.y };
		defenseBlock[i].active = true;

	}
}
void Defenses::drawDefense() {
	for (int i = 0; i < 3; ++i) {
		const DefenseBlock& defenseBlocks = defenseBlock[i];
		if (defenseBlocks.active) {
			//desenha uma defesa que esteja ativa na posição que queremos
			mvprintw(defenseBlocks.posDefenses.y, defenseBlocks.posDefenses.x, "#####");
			refresh();


		}
	}

}
