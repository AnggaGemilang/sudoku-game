#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include "tools.h"
#include "users.h"
#include "interface.h"
#include "game.h"

int main()
{
//	PlaySound(TEXT("D:\angga\Documents\Tugas\POLBAN\SDA\Program Acuan Tugas-1 SDA-Praktik-20210319\Sudoku\backsound.mp3",NULL,SND_SYNC));
	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	menu_login();
	return 0;
}
