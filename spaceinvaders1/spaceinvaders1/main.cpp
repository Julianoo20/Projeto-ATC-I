#include <iostream>
#include <stdio.h>
#include <curses.h>
#include "Cannon.h"
#include "CannonUI.h"
#include "defenses.h"
const int WIDTH = 120;
const int HEIGHT = 60;

using namespace std;

int main(){
	//centrar o canhao e criar construtor:
	int x = WIDTH / 2; // Center the object horizontally
	int y = 26; // Center the object vertically
	PosXY posInitCannon = { x,y };
	CannonUI cannon(posInitCannon, 2, 2);
	PosXY posInitDefense = { 30,20 };
	Defenses defenses(posInitDefense);



	
	//fazer as inciazlizações da biblioteca para o display
	initscr();
	noecho(); // Don't echo user input to the screen
	cbreak(); // Disable line buffering
	keypad(stdscr, TRUE); // Enable special keys


	int ch = 0; // To store user input
	
	// Loop principal
	while (ch != KEY_BACKSPACE) {
		clear();
		defenses.drawDefense();
		cannon.drawCannon();
		refresh();
		ch = getch();
	
		

				}
				endwin(); // End the curses library
			
















//int main() {
//	initscr(); // Initialize the curses library
//	noecho(); // Don't echo user input to the screen
//	cbreak(); // Disable line buffering
//	keypad(stdscr, TRUE); // Enable special keys
//	//int height = 10;
//	//int width = 20;
//
//	int x = WIDTH / 2; // Center the object horizontally
//	int y = 26; // Center the object vertically
//	PosXY posInit = { x,y };
//	Cannon player1(posInit,20,30);
//
//
//	// Inicializa os blocos de defesa
//	PosXY posInitDefense = { 30,20 };
//	Defenses defenses(posInitDefense);
//	int ch = 0; // To store user input
//	while (ch != 'q') {
//		clear(); // Clear the screen
//		mvprintw(posInit.y, posInit.x, "|----|"); // Print the object at the current position
//		defenses.drawDefense();
//
//		//mvprintw(3, 0, "drawDefense() chamada"); //para confirmar que a função estava a ser chamada corretamente
//
//
//
//		refresh(); // Refresh the screen
//		ch = getch(); // Get user input
//		// Check user input and update object position
//		switch (ch) {
//		case KEY_LEFT:
//			if (posInit.x > 0) {
//				posInit.x=player1.moveLeft(); //verifica se já atingiu a posição limite da esquerda
//			}
//			break;
//		case KEY_RIGHT:
//			if (posInit.x < COLS - 7) { // verifica se a posição é maior que a largura do ecrã
//				posInit.x=player1.moveRight();
//			}
//			break;
//		}
//	}
//	endwin(); // End the curses library
//

	return 0;
}