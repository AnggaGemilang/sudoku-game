#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tools.h"

// Procedure untuk menampilkan teks berdasarkan koordinat gotoxy()
void printg(int xCoordinat, int yCoordinat, const char *teks){
 	gotoxy(yCoordinat,xCoordinat);
 	printf("%s",teks);
}

Timestamp GetNow(){
	Timestamp timestamp;
    char buff[100];
    time_t now = time(0);
    struct tm now_t = *localtime(&now);
    strftime(buff, 100, " %d-%m-%Y %H:%M:%S", &now_t);    
    timestamp.jam = now_t.tm_hour;
    timestamp.menit = now_t.tm_min;
    timestamp.detik = now_t.tm_sec;
    timestamp.hari = now_t.tm_mday;
    timestamp.bulan = now_t.tm_mon + 1;
    timestamp.tahun = now_t.tm_year + 1900;
	return timestamp;
}
	
void warna_teks(int warna) //modul yang berfungsi untuk memberi warna ke karakter
{ 
	HANDLE hConsole; 
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, warna);
}

int random_number(int batasBawah, int batasAtas){
    int angka = (rand() % (batasAtas - batasBawah + 1)) + batasBawah;
    return angka;
}

void loop(int jml, const char *karakter){
	int ke;
	for(ke=0; ke<jml*4+1; ke++){
		printf(karakter);
	}
	printf("\n");
}

char *to_string(int angka){
	char* converted = (char*) malloc (sizeof(char)*(100+1));
	sprintf(converted, "%d", angka);
	return converted;
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void exit()
{
	gotoxy(69,42); printf("Terima Kasih Telah Bermain!"); exit(0);
}

// Procedure untuk teks berjalan
void marquee_text(const char *kalimat, int speed){ // *Dibuat Oleh Angga, Akbar, Restu
	int x; double y;
   	for(x=0; kalimat[x]!='\0'; x++){
	    printf("%c",kalimat[x]);
	    for(y=0; y<=speed; y++){
		}
   }
}
