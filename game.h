#ifndef game_H
#define game_H

#include "tools.h"

typedef struct
{
	char status;
	char value;
} Sudoku;

typedef struct
{
	int id_history;
	Users user;
	char difficulty[50];
	char level[50];
	char poin[20];
	int all_poin;
	Timestamp timestamp;
} History;

void history(Users userParams);

void checking_result(Users userParams, Sudoku ** P, int jmlBaris, int jmlKolom, int jmlBarisKecil, int jmlKolomKecil, int cursorX, int cursorY, const char * level);

void cursor(Users user, Sudoku ** B, int jmlBaris, int jmlKolom, int jmlBarisKecil, int jmlKolomKecil,int cursorX, int cursorY, const char *level);

void play(Users user, int jmlBaris, int jmlKolom, int jmlBarisKecil, int jmlKolomKecil, int cursorX, int cursorY, const char *level);

int cursor_menu(int BanyakPilihan, int x, int y);

#endif
