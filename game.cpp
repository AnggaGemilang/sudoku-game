#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tools.h"
#include "interface.h"
#include "game.h"

void history(Users userParams)
{
	FILE *fp;
	History history;
	int counterBaris = 23, no = 1;	
	title('n');
	printg(20,20,"\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");	
 	printg(21,20,"\xb3");
 	printg(21,22,"NO");
	printg(21,25,"\xb3");
 	printg(21,29,"ID HISTORY");
 	printg(21,42,"\xb3");
 	printg(21,49,"NAMA USER");
 	printg(21,63,"\xb3");
 	printg(21,67,"DIFFICULTY");
 	printg(21,80,"\xb3");
 	printg(21,85,"LEVEL");
 	printg(21,93,"\xb3");
 	printg(21,98,"POIN");
 	printg(21,105,"\xb3");
 	printg(21,113,"TIMESTAMP");
 	printg(21,130,"\xb3");
 	printg(21,134,"TOTAL POIN");
 	printg(21,147,"\xb3");
	printg(22,20,"\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");	

   	if((fp = fopen("assets/bin/history.dat","ab+")) == '\0'){
       	printf("Error! File Tidak Dapat Dibuka...");
       	MessageBeep(0);
	    exit(1);
	} else 
	{
		while(fread(&history, sizeof(History), 1, fp)==1){
			if(userParams.id_user==history.user.id_user){
			 	printg(counterBaris,20,"\xb3");
			 	printg(counterBaris,22,to_string(no));
				printg(counterBaris,25,"\xb3");
			 	printg(counterBaris,32,to_string(history.id_history));
			 	printg(counterBaris,42,"\xb3");
			 	printg(counterBaris,45,history.user.name);
			 	printg(counterBaris,63,"\xb3");
			 	printg(counterBaris,68,history.difficulty);
			 	printg(counterBaris,80,"\xb3");
			 	printg(counterBaris,84,history.level);
			 	printg(counterBaris,93,"\xb3");
			 	printg(counterBaris,97,history.poin);
			 	printg(counterBaris,105,"\xb3");
			 	printg(counterBaris,108,strcat(to_string(history.timestamp.hari),"/"));
			 	printg(counterBaris,111,strcat(to_string(history.timestamp.bulan),"/"));
			 	printg(counterBaris,114,strcat(to_string(history.timestamp.tahun),"/"));
			 	printg(counterBaris,120,strcat(to_string(history.timestamp.jam),":"));
			 	printg(counterBaris,123,strcat(to_string(history.timestamp.menit),":"));
			 	printg(counterBaris,126,to_string(history.timestamp.detik));
			 	printg(counterBaris,130,"\xb3");
			 	printg(counterBaris,137,to_string(history.all_poin));
			 	printg(counterBaris,147,"\xb3");
				printg(counterBaris+1,20,"\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");	
			}
			counterBaris+=2;
		}
	}
   	fclose(fp);
	gotoxy(20, counterBaris+3); printf("Press any key to back . . .");
   	getch();
   	system("cls");
   	play_option(userParams);
}

void play(Users user, int jmlBaris, int jmlKolom, int jmlBarisKecil, int jmlKolomKecil, int cursorX, int cursorY, const char *level)
{
	int i, j, counter, counter2;
    Sudoku ** arrKotak;
	system("cls");
	title('n');
    arrKotak = (Sudoku **)malloc(jmlBaris*sizeof(Sudoku **));
    for(i = 0 ; i < jmlBaris ; i++)
    {
        arrKotak[i] = (Sudoku *)malloc(jmlKolom*sizeof(Sudoku *));
	}
	
	Sudoku Beginner1[4][4] = { {{'t','3'},{'t','4'},{'t','1'},{'f','0'}},
					 		{{'f','0'},{'t','2'},{'f','0'},{'f','0'}},
					 		{{'f','0'},{'f','0'},{'t','2'},{'f','0'}},
					 		{{'f','0'},{'t','1'},{'t','4'},{'t','3'}} };

	Sudoku Beginner2[4][4] = { {{'t','4'},{'t','3'},{'f','0'},{'f','0'}},
					 		{{'t','1'},{'t','2'},{'t','3'},{'f','0'}},
					 		{{'f','0'},{'f','0'},{'t','2'},{'f','0'}},
					 		{{'t','2'},{'t','1'},{'f','0'},{'f','0'}} };

	Sudoku Beginner3[4][4] = { {{'f','0'},{'t','1'},{'f','0'},{'f','0'}},
					 		{{'f','0'},{'f','0'},{'t','2'},{'f','0'}},
					 		{{'t','3'},{'f','0'},{'f','0'},{'f','0'}},
					 		{{'f','0'},{'f','0'},{'f','0'},{'t','4'}} };
					 		
	Sudoku Easy1[6][6] = { {{'t','2'},{'f','0'},{'t','1'},{'t','6'},{'t','3'},{'t','4'}},
					 		{{'f','0'},{'t','4'},{'t','6'},{'t','2'},{'t','5'},{'f','0'}},
					 		{{'t','1'},{'t','2'},{'t','5'},{'f','0'},{'t','6'},{'t','3'}},
					 		{{'t','4'},{'t','6'},{'t','3'},{'t','5'},{'f','0'},{'t','2'}},
					 		{{'f','0'},{'t','1'},{'t','4'},{'f','0'},{'t','2'},{'t','6'}},
					 		{{'t','6'},{'t','3'},{'t','2'},{'t','1'},{'f','0'},{'t','5'}} };

	Sudoku Easy2[6][6] = { {{'f','0'},{'f','0'},{'t','3'},{'f','0'},{'t','1'},{'f','0'}},
							{{'t','5'},{'t','6'},{'f','0'},{'t','3'},{'t','2'},{'f','0'}},
							{{'f','0'},{'t','5'},{'t','4'},{'t','2'},{'f','0'},{'t','3'}},
					 		{{'t','2'},{'f','0'},{'t','6'},{'t','4'},{'t','5'},{'f','0'}},
							{{'f','0'},{'t','1'},{'t','2'},{'f','0'},{'t','4'},{'t','5'}},
					 		{{'f','0'},{'t','4'},{'f','0'},{'t','1'},{'f','0'},{'f','0'}} };

	Sudoku Easy3[6][6] = { {{'f','2'},{'f','0'},{'t','6'},{'f','0'},{'f','0'},{'f','0'}},
					 		{{'f','0'},{'f','0'},{'f','0'},{'t','1'},{'f','0'},{'f','0'}},
					 		{{'f','0'},{'f','0'},{'t','2'},{'f','0'},{'t','4'},{'t','1'}},
					 		{{'f','0'},{'t','5'},{'f','0'},{'f','0'},{'t','6'},{'f','0'}},
					 		{{'t','6'},{'t','4'},{'f','0'},{'f','0'},{'f','0'},{'f','0'}},
					 		{{'f','0'},{'f','0'},{'t','1'},{'f','0'},{'f','0'},{'f','0'}} };
	
	Sudoku Medium1[8][8]={ {{'t','3'},{'t','1'},{'t','2'},{'f','0'},{'t','9'},{'t','5'},{'f','0'},{'t','7'}},
						  {{'f','0'},{'f','0'},{'t','9'},{'t','1'},{'f','0'},{'t','7'},{'f','0'},{'t','8'}},
						  {{'t','4'},{'f','0'},{'t','7'},{'t','2'},{'t','6'},{'t','3'},{'t','5'},{'f','0'}},
						  {{'t','9'},{'f','0'},{'f','0'},{'t','7'},{'f','0'},{'f','0'},{'t','2'},{'t','4'}},
						  {{'f','0'},{'t','2'},{'t','8'},{'f','0'},{'t','1'},{'f','0'},{'f','0'},{'t','9'}},
						  {{'f','0'},{'t','3'},{'f','0'},{'t','9'},{'t','8'},{'t','2'},{'f','0'},{'t','5'}},
						  {{'f','0'},{'t','4'},{'t','5'},{'t','6'},{'f','0'},{'f','0'},{'f','0'},{'t','3'}},
						  {{'t','1'},{'t','7'},{'f','0'},{'f','0'},{'t','5'},{'t','8'},{'t','9'},{'f','0'}} };	

	Sudoku Medium2[8][8]={ {{'t','3'},{'t','1'},{'t','2'},{'f','0'},{'t','9'},{'t','5'},{'f','0'},{'t','7'}},
						  {{'f','0'},{'f','0'},{'t','9'},{'t','1'},{'f','0'},{'t','7'},{'f','0'},{'t','8'}},
						  {{'t','4'},{'f','0'},{'t','7'},{'t','2'},{'t','6'},{'t','3'},{'t','5'},{'f','0'}},
						  {{'t','9'},{'f','0'},{'f','0'},{'t','7'},{'f','0'},{'f','0'},{'t','2'},{'t','4'}},
						  {{'f','0'},{'t','2'},{'t','8'},{'f','0'},{'t','1'},{'f','0'},{'f','0'},{'t','9'}},
						  {{'f','0'},{'t','3'},{'f','0'},{'t','9'},{'t','8'},{'t','2'},{'f','0'},{'t','5'}},
						  {{'f','0'},{'t','4'},{'t','5'},{'t','6'},{'f','0'},{'f','0'},{'f','0'},{'t','3'}},
						  {{'t','1'},{'t','7'},{'f','0'},{'f','0'},{'t','5'},{'t','8'},{'t','9'},{'f','0'}} };	

	Sudoku Medium3[8][8]={ {{'t','3'},{'t','1'},{'t','2'},{'f','0'},{'t','9'},{'t','5'},{'f','0'},{'t','7'}},
						  {{'f','0'},{'f','0'},{'t','9'},{'t','1'},{'f','0'},{'t','7'},{'f','0'},{'t','8'}},
						  {{'t','4'},{'f','0'},{'t','7'},{'t','2'},{'t','6'},{'t','3'},{'t','5'},{'f','0'}},
						  {{'t','9'},{'f','0'},{'f','0'},{'t','7'},{'f','0'},{'f','0'},{'t','2'},{'t','4'}},
						  {{'f','0'},{'t','2'},{'t','8'},{'f','0'},{'t','1'},{'f','0'},{'f','0'},{'t','9'}},
						  {{'f','0'},{'t','3'},{'f','0'},{'t','9'},{'t','8'},{'t','2'},{'f','0'},{'t','5'}},
						  {{'f','0'},{'t','4'},{'t','5'},{'t','6'},{'f','0'},{'f','0'},{'f','0'},{'t','3'}},
						  {{'t','1'},{'t','7'},{'f','0'},{'f','0'},{'t','5'},{'t','8'},{'t','9'},{'f','0'}} };	
	
	Sudoku Hard1[9][9]={ {{'t','3'},{'t','1'},{'t','2'},{'f','0'},{'t','9'},{'t','5'},{'f','0'},{'t','7'},{'t','6'}},
						  {{'f','0'},{'f','0'},{'t','9'},{'t','1'},{'f','0'},{'t','7'},{'f','0'},{'t','8'},{'t','2'}},
						  {{'t','4'},{'f','0'},{'t','7'},{'t','2'},{'t','6'},{'t','3'},{'t','5'},{'f','0'},{'f','0'}},
						  {{'t','9'},{'f','0'},{'f','0'},{'t','7'},{'f','0'},{'f','0'},{'t','2'},{'t','4'},{'f','0'}},
						  {{'f','0'},{'t','2'},{'t','8'},{'f','0'},{'t','1'},{'f','0'},{'f','0'},{'t','9'},{'t','3'}},
						  {{'f','0'},{'t','3'},{'f','0'},{'t','9'},{'t','8'},{'t','2'},{'f','0'},{'t','5'},{'t','7'}},
						  {{'f','0'},{'t','4'},{'t','5'},{'t','6'},{'f','0'},{'f','0'},{'f','0'},{'t','3'},{'t','1'}},
						  {{'t','1'},{'t','7'},{'f','0'},{'f','0'},{'t','5'},{'t','8'},{'t','9'},{'f','0'},{'t','4'}},
						  {{'t','8'},{'f','0'},{'t','3'},{'t','4'},{'t','2'},{'f','0'},{'t','7'},{'f','0'},{'t','5'}}};
	
	Sudoku Hard2[9][9]={ {{'f','0'},{'f','0'},{'t','5'},{'f','0'},{'f','0'},{'f','0'},{'f','0'},{'f','0'},{'f','0'}},
						  {{'t','4'},{'f','0'},{'f','0'},{'t','5'},{'f','0'},{'f','0'},{'t','1'},{'f','0'},{'t','6'}},
						  {{'f','0'},{'t','2'},{'f','0'},{'t','6'},{'f','0'},{'f','0'},{'f','0'},{'t','4'},{'f','0'}},
						  {{'f','0'},{'t','9'},{'f','0'},{'f','0'},{'f','0'},{'t','3'},{'t','5'},{'t','1'},{'f','0'}},
						  {{'f','0'},{'f','0'},{'t','4'},{'f','0'},{'t','1'},{'f','0'},{'f','0'},{'f','0'},{'f','0'}},
						  {{'t','2'},{'f','0'},{'f','0'},{'t','9'},{'t','8'},{'f','0'},{'f','0'},{'f','0'},{'t','4'}},
						  {{'f','0'},{'t','8'},{'t','1'},{'f','0'},{'f','0'},{'t','4'},{'f','0'},{'t','9'},{'f','0'}},
						  {{'t','3'},{'f','0'},{'f','0'},{'t','8'},{'f','0'},{'f','0'},{'f','0'},{'f','0'},{'t','1'}},
						  {{'f','0'},{'f','0'},{'t','2'},{'f','0'},{'f','0'},{'t','7'},{'f','0'},{'t','6'},{'f','0'}}};
	
	Sudoku Hard3[9][9]={ {{'t','3'},{'t','5'},{'f','0'},{'t','2'},{'t','7'},{'f','0'},{'t','6'},{'t','8'},{'f','0'}},
						  {{'t','7'},{'f','0'},{'t','4'},{'f','0'},{'f','0'},{'t','8'},{'f','0'},{'f','0'},{'t','3'}},
						  {{'t','6'},{'t','8'},{'f','0'},{'f','0'},{'f','0'},{'t','5'},{'t','7'},{'f','0'},{'t','1'}},
						  {{'f','0'},{'t','6'},{'t','5'},{'f','0'},{'f','0'},{'t','1'},{'f','0'},{'f','0'},{'f','0'}},
						  {{'t','9'},{'t','3'},{'f','0'},{'f','0'},{'f','0'},{'f','0'},{'f','0'},{'t','4'},{'t','6'}},
						  {{'f','0'},{'f','0'},{'f','0'},{'t','6'},{'f','0'},{'f','0'},{'t','2'},{'t','9'},{'f','0'}},
						  {{'t','2'},{'f','0'},{'t','3'},{'t','7'},{'f','0'},{'f','0'},{'f','0'},{'t','1'},{'t','8'}},
						  {{'t','8'},{'f','0'},{'f','0'},{'t','3'},{'f','0'},{'f','0'},{'t','5'},{'f','0'},{'t','9'}},
						  {{'f','0'},{'t','1'},{'t','7'},{'f','0'},{'t','9'},{'t','4'},{'f','0'},{'t','6'},{'t','2'}}};
    
	if(strcmp(level,"Beginner")==0)
	{
		if(user.poinBeginner==0)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Beginner1[i][j].value;
					arrKotak[i][j].status = Beginner1[i][j].status;
				}
			}	
			gotoxy(80,21); printf("Level : 1");				
		} else if(user.poinBeginner==1000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Beginner2[i][j].value;
					arrKotak[i][j].status = Beginner2[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 2");		
		} else if(user.poinBeginner>=2000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Beginner3[i][j].value;
					arrKotak[i][j].status = Beginner3[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 3");					
		}
	} else if(strcmp(level,"Easy")==0){
		if(user.poinEasy==0)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Easy1[i][j].value;
					arrKotak[i][j].status = Easy1[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 1");				
		} else if(user.poinEasy==1000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Easy2[i][j].value;
					arrKotak[i][j].status = Easy2[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 2");		
		} else if(user.poinEasy>=2000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Easy3[i][j].value;
					arrKotak[i][j].status = Easy3[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 3");					
		}
	} else if(strcmp(level,"Medium")==0){
		if(user.poinMedium==0)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Medium1[i][j].value;
					arrKotak[i][j].status = Medium1[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 1");				
		} else if(user.poinMedium==1000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Medium2[i][j].value;
					arrKotak[i][j].status = Medium2[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 2");		
		} else if(user.poinMedium>=2000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Medium3[i][j].value;
					arrKotak[i][j].status = Medium3[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 3");					
		}
	} else if(strcmp(level,"Hard")==0){
		if(user.poinHard==0)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Hard1[i][j].value;
					arrKotak[i][j].status = Hard1[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 1");				
		} else if(user.poinHard==1000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Hard2[i][j].value;
					arrKotak[i][j].status = Hard2[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 2");		
		} else if(user.poinHard>=2000)
		{
		    for(i=0; i<jmlBaris; i++)
		    {
		    	for(j=0; j<jmlKolom; j++)
		    	{
					arrKotak[i][j].value = Hard3[i][j].value;
					arrKotak[i][j].status = Hard3[i][j].status;
				}
			}		
			gotoxy(80,21); printf("Level : 3");					
		}
	}     	
	
	for(i=36; i<95; i++)
	{
		gotoxy(i,20); printf("\xc4");
	}
	gotoxy(35,20); printf("\xda");
	gotoxy(42,21); printf("Difficulty : %s", level);
	for(i=22; i>20; i--)
	{
		gotoxy(35,i); printf("\xb3");
	}
	for(i=36; i<95; i++)
	{
		gotoxy(i,22); printf("\xc4");
	}
	gotoxy(95,20); printf("\xbf");
	for(i=22; i>20; i--)
	{
		gotoxy(95,i); printf("\xb3");
	}
	for(i=44; i>22; i--)
	{
		gotoxy(95,i); printf("\xb3");
	}
	gotoxy(95,44); printf("\xd9");	
	for(i=44; i>22; i--)
	{
		gotoxy(35,i); printf("\xb3");
	}	
	gotoxy(35,44); printf("\xc0");	
	for(i=36; i<95; i++)
	{
		gotoxy(i,44); printf("\xc4");
	}
	gotoxy(cursorX, cursorY); loop(jmlKolom,"=");
	int barisAtas = cursorY-1, barisBawah = cursorY;
	for (counter=0;counter<jmlBaris;counter++)
	{
		gotoxy(cursorX, barisAtas+=2);
		printf("| ");
		for (counter2=0;counter2<jmlKolom;counter2++)
		{
			if(arrKotak[counter][counter2].status == 'f')
			{
				printf("%c",' ');
			}
			else
			{
				printf("%c", arrKotak[counter][counter2].value);		
			}
			printf(" | ");
		}
		printf("\n");
		gotoxy(cursorX, barisBawah+=2);
		if(counter==jmlBarisKecil-1||counter==jmlBarisKecil+jmlBarisKecil-1 ||counter==jmlBarisKecil+jmlBarisKecil+jmlBarisKecil-1 ||counter==jmlBarisKecil+jmlBarisKecil+jmlBarisKecil+jmlBarisKecil-1){
			loop(jmlKolom,"=");	
		} else {
			loop(jmlKolom,"-");	
		}
	}
	for(i=101; i<132; i++)
	{
		gotoxy(i,20); printf("\xc4");
	}
	gotoxy(132,20); printf("\xbf");	
	for(i=21; i<36; i++)
	{
		gotoxy(132,i); printf("\xb3");
	}
	gotoxy(132,36); printf("\xd9");	
	gotoxy(105,22);printf("press a to left");
	gotoxy(105,24);printf("press d to right");
	gotoxy(105,26);printf("press w to up");
	gotoxy(105,28);printf("press s to down");
	gotoxy(105,30);printf("press c to clear");
	gotoxy(105,32);printf("press r to refresh");
	gotoxy(105,34);printf("press enter to finish");
	gotoxy(100,20); printf("\xda");
	for(i=36; i>20; i--)
	{
		gotoxy(100,i); printf("\xb3");
	}	
	gotoxy(100,36); printf("\xc0");	
	for(i=101; i<132; i++)
	{
		gotoxy(i,36); printf("\xc4");
	}
	cursor(user, arrKotak, jmlBaris, jmlKolom, jmlBarisKecil, jmlKolomKecil, cursorX, cursorY, level);
}

int cursor_menu(int BanyakPilihan,int x,int y)
{
    int Pilih=1, ysel = (BanyakPilihan + y - 1) - y;
	char cursor;
	gotoxy(x,y); printf("%c",62);
	do
	{
		cursor=getch();
		if(cursor == 80)
		{
			Beep(500, 40);
			if(Pilih+1 > BanyakPilihan)
			{
				gotoxy(x,y); printf(" ");
				y=26;
				Pilih=1;
				gotoxy(x,y); printf("%c",62);
			}
			else
			{
				gotoxy(x,y); printf(" ");
				Pilih++;
				y+=2;
				gotoxy(x,y); printf("%c",62);
			}
		}

		if(cursor == 72)
		{
			Beep(500, 40);
			if(Pilih-1 == 0)
			{
				gotoxy(x,y); printf(" ");
				y=y+BanyakPilihan*2-2;
				Pilih=BanyakPilihan;
				gotoxy(x,y); printf("%c",62);
			}
			else
			{
				gotoxy(x,y); printf(" ");
				Pilih--;
				y-=2;
				gotoxy(x,y); printf("%c",62);
			}
		}
	}while(cursor!=13);
	Beep(700, 40);
	return Pilih;
}

void cursor(Users user, Sudoku ** B, int jmlBaris, int jmlKolom, int jmlBarisKecil, int jmlKolomKecil, int cursorX, int cursorY, const char *level)
{
	int x=cursorX+2, y=cursorY+1, a=0, b=0, batasVertikal, batasHorizontal;
	char curs, menu = 'n';
	gotoxy(x,y);
	while (menu == 'n')
	{
		curs = getch();
		Beep(500, 50);
		switch(curs)
		{
			case 's' : {y=y+2;a=a+1;break;}
			case 'a' : {x=x-4;b=b-1;break;}
			case 'w' : {y=y-2;a=a-1;break;}
			case 'd' : {x=x+4;b=b+1;break;}
			case '1' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '1';
					warna_teks(RED);
					printf("1");
					warna_teks(WHITE);
				}
				break;
			}
			case '2' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '2';
					warna_teks(RED);
					printf("2");
					warna_teks(WHITE);
				}
				break;
			}
			case '3' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '3';
					warna_teks(RED);
					printf("3");
					warna_teks(WHITE);
				}
				break;
			}
			case '4' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '4';
					warna_teks(RED);
					printf("4");
					warna_teks(WHITE);
				}
				break;
			}
			case '5' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '5';
					warna_teks(RED);
					printf("5");
					warna_teks(WHITE);
				}
				break;
			}
			case '6' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '6';
					warna_teks(RED);
					printf("6");
					warna_teks(WHITE);
				}
				break;
			}
			case '7' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '7';
					warna_teks(RED);
					printf("7");
					warna_teks(WHITE);
				}
				break;
			}
			case '8' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '8';
					warna_teks(RED);
					printf("8");
					warna_teks(WHITE);
				}
				break;
			}
			case '9' :
			{
				if(B[a][b].status == 'f')
				{
					B[a][b].value = '9';
					warna_teks(RED);
					printf("9");
					warna_teks(WHITE);
				}
				break;
			}
			case 'r' :
			{
				play(user, jmlBaris, jmlKolom, jmlBarisKecil, jmlKolomKecil, cursorX, cursorY, level);
			}			
			case 'c' :
			{
				if (B[a][b].status == 'f')
				{
					B[a][b].value='0';
					printf("%s"," ");
				}
				break;
			}
			case 13 :
			{
				int i;
				for(i=39; i>36; i--)
				{
					gotoxy(100,i); printf("\xb3");
				}
				gotoxy(100,40); printf("\xc0");	
				for(i=101; i<132; i++)
				{
					gotoxy(i,40); printf("\xc4");
				}
				for(i=40; i>36; i--)
				{
					gotoxy(132,i); printf("\xb3");
				}
				gotoxy(132,40); printf("\xd9");
				ulangi:
				gotoxy(107,38); printf("Anda Yakin [Y/N]? "); menu = getch();
				Beep(700, 50);
				if(menu=='n' || menu=='N')
				{
					int i;
					for(i=39; i>36; i--)
					{
						gotoxy(100,i); printf(" ");
					}
						gotoxy(100,40); printf(" ");	
					for(i=101; i<132; i++)
					{
						gotoxy(i,40); printf(" ");
					}
					for(i=40; i>36; i--)
					{
						gotoxy(132,i); printf(" ");
					}
					gotoxy(132,40); printf(" ");
					gotoxy(107,38); printf("                    ");										
				} else if(menu=='y' || menu=='Y')
				{
					checking_result(user, B, jmlBaris, jmlKolom, jmlBarisKecil, jmlKolomKecil, cursorX, cursorY, level);			
				} else 
				{
					goto ulangi;					
				}		
			break;
			}
			default  : {x=cursorX+2; y=cursorY+1; a=0; b=0; break;}
		}

		if(strcmp(level,"Beginner")==0)
		{
			batasHorizontal = 74;
			batasVertikal = 36;
		} else if(strcmp(level,"Easy")==0)
		{
			batasHorizontal = 78;
			batasVertikal = 38;			
		} else if(strcmp(level,"Medium")==0)
		{
			batasHorizontal = 82;
			batasVertikal = 40;			
		} else if(strcmp(level,"Hard")==0)
		{
			batasHorizontal = 84;
			batasVertikal = 42;			
		}

		if (x>batasHorizontal || x<cursorX+2 || y<cursorY+1 || y>batasVertikal)
		{
			x=cursorX+2; y=cursorY+1; a=0; b=0;
		}
		gotoxy(x,y);
	}
}

void checking_result(Users userParams, Sudoku ** P, int jmlBaris, int jmlKolom, int jmlBarisKecil, int jmlKolomKecil, int cursorX, int cursorY, const char * level)
{
	int i, j, k, ketemu, ketemu2;
	char yorn, yorn1;
	Users user, UserNow;
	History history;
	FILE *fpUser, *fpHistory;
	i=0;
	ketemu=0;
	while (i<jmlBaris && ketemu == 0)
	{
		j=0;
		while (j<jmlBaris && ketemu == 0)
		{
			k=0;
			while (k<j && ketemu == 0)
			{
				if (P[i][j].value == P[i][k].value)
				{
					ketemu=1;
				}
				else {
					k++;
				}
			}
			j++;
		}
		i++;
	}
	j=0;
	ketemu2=0;
	while (j<jmlKolom && ketemu2==0)
	{
		i=0;
		while (i<jmlKolom && ketemu2==0)
		{
			k=0;
			while (k<i && ketemu2==0)
			{
				if (P[i][j].value == P[k][j].value)
				{
					ketemu2=1;
				}
				else {
					k++;			
				}
			}
			i++;
		}
		j++;
	}
	if((ketemu==1)||(ketemu2==1))
	{	
	   	if((fpUser = fopen("assets/bin/user.dat","rb+")) == '\0'){
	       	printf("Error! File Tidak Dapat Dibuka...");
			MessageBeep(0);       	
		    exit(1);
		} else 
		{
			while(fread(&user, sizeof(Users), 1, fpUser)==1)
			{
				if(user.id_user==userParams.id_user){
					user.id_user = user.id_user;
					user.usia = user.usia;
					if(user.tot_poin > 0)
					{
						user.tot_poin = user.tot_poin - 1000;						
					} else {
						user.tot_poin = 0;
					}
					strcpy(user.gender, user.gender);
					strcpy(user.name, user.name);
					strcpy(user.pass, user.pass);
					strcpy(user.pekerjaan, user.pekerjaan);
					strcpy(user.uname, user.uname);
					if(user.tot_poin < 2000)
					{
						strcpy(user.rank, user.rank);						
					} else if(user.tot_poin >= 2000)
					{
						strcpy(user.rank, "Elite");						
					} else if(user.tot_poin >= 4000)
					{
						strcpy(user.rank, "Master");						
					} else if(user.tot_poin >= 6000)
					{
						strcpy(user.rank, "Grandmaster");						
					} else if(user.tot_poin >= 7000)
					{
						strcpy(user.rank, "Epic");						
					} else if(user.tot_poin >= 8000)
					{
						strcpy(user.rank, "Legend");						
					} else if(user.tot_poin >= 10000)
					{
						strcpy(user.rank, "Mythic");						
					} else if(user.tot_poin > 10000)
					{
						strcpy(user.rank, "Mythical Glory");												
					}
					
					if(strcmp(level,"Beginner")==0)
					{
						if(user.poinBeginner > 0)
						{
							user.poinBeginner = user.poinBeginner - 1000;						
						} else {
							user.poinBeginner = 0;
						}
						user.poinEasy = user.poinEasy;												
						user.poinMedium = user.poinMedium;												
						user.poinHard = user.poinHard;									
					} else if(strcmp(level,"Easy")==0)
					{
						user.poinBeginner = user.poinBeginner;												
						if(user.poinEasy > 0)
						{
							user.poinEasy = user.poinEasy-1000;												
						} else {
							user.poinEasy = 0;
						}
						user.poinMedium = user.poinMedium;												
						user.poinHard = user.poinHard;															
					} else if(strcmp(level,"Medium")==0)
					{
						user.poinBeginner = user.poinBeginner;												
						user.poinEasy = user.poinEasy;											
						if(user.poinEasy > 0)
						{
							user.poinMedium = user.poinMedium-1000;												
						} else {
							user.poinMedium = 0;
						}
						user.poinHard = user.poinHard;															
					} else if(strcmp(level,"Hard")==0)
					{
						user.poinBeginner = user.poinBeginner;												
						user.poinEasy = user.poinEasy;												
						user.poinMedium = user.poinMedium;										
						if(user.poinEasy > 0)
						{
							user.poinHard = user.poinHard-1000;															
						} else {
							user.poinHard = 0;
						}
					}
					
					UserNow = user;
					
					fseek(fpUser, (long) -sizeof(Users), SEEK_CUR);
					fwrite(&user, sizeof(Users), 1, fpUser);
					fclose(fpUser);
				}
			}
		}

	   	if((fpHistory = fopen("assets/bin/history.dat","ab")) == '\0'){
	       	printf("Error! File Tidak Dapat Dibuka...");
			MessageBeep(0);       	
		    exit(1);
		} else 
		{
			history.id_history = random_number(11111, 99999);
			history.user = user;
			history.all_poin = user.tot_poin;
			if(user.tot_poin==0)
			{
				strcpy(history.poin, "0");
			} else 
			{
				strcpy(history.poin, "-1000");
			}
			strcpy(history.difficulty, level);
			history.timestamp = GetNow();
			if(strcmp(level,"Beginner")==0)
			{
				if(user.poinBeginner==0)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinBeginner==0 && strcmp(history.poin, "-1000")==0)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinBeginner==1000)
				{
					strcpy(history.level, "Level 3");
				}
			} else if(strcmp(level,"Easy")==0){
				if(user.poinEasy==0)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinEasy==1000)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinEasy==2000)
				{
					strcpy(history.level, "Level 3");
				}
			} else if(strcmp(level,"Medium")==0){
				if(user.poinMedium==0)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinMedium==1000)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinMedium==2000)
				{
					strcpy(history.level, "Level 3");
				}
			} else if(strcmp(level,"Hard")==0){
				if(user.poinHard==0)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinHard==1000)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinHard==2000)
				{
					strcpy(history.level, "Level 3");
				}
			}
			fwrite(&history, sizeof(History), 1, fpHistory);
			fclose(fpHistory);
		}			
	
		for(i=44; i>36; i--)
		{
			gotoxy(100,i); printf("\xb3");
		}
		gotoxy(100,44); printf("\xc0");	
		for(i=101; i<132; i++)
		{
			gotoxy(i,44); printf("\xc4");
		}
		for(i=44; i>36; i--)
		{
			gotoxy(132,i); printf("\xb3");
		}
		gotoxy(132,44); printf("\xd9");	
		ulangi:
		gotoxy(103,42);printf("Anda Kalah, ulangi [Y/N]? "); yorn = getch();
		Beep(700, 40);
		if (yorn == 'y')
		{
			system("cls");
			play(user, jmlBaris,jmlKolom, jmlBarisKecil, jmlKolomKecil, cursorX, cursorY, level);
		}
		else if (yorn == 'n')
		{
			system("cls");
			title('n');
			play_option(user);
		} else 
		{
			goto ulangi;
		}
	}
	else
	{
		for(i=44; i>36; i--)
		{
			gotoxy(100,i); printf("\xb3");
		}
		gotoxy(100,44); printf("\xc0");	
		for(i=101; i<132; i++)
		{
			gotoxy(i,44); printf("\xc4");
		}
		for(i=44; i>36; i--)
		{
			gotoxy(132,i); printf("\xb3");
		}
		gotoxy(132,44); printf("\xd9");
		gotoxy(106,42);printf("Selamat!! Anda Menang"); 

	   	if((fpUser = fopen("assets/bin/user.dat","rb+")) == '\0'){
	       	printf("   Error! File Tidak Dapat Dibuka...");
			MessageBeep(0);       	
		    exit(1);
		} else 
		{
			while(fread(&user, sizeof(Users), 1, fpUser)==1)
			{
				if(user.id_user==userParams.id_user){
					user.id_user = user.id_user;
					user.usia = user.usia;
					user.tot_poin = user.tot_poin + 1000;
					strcpy(user.gender, user.gender);
					strcpy(user.name, user.name);
					strcpy(user.pass, user.pass);
					strcpy(user.pekerjaan, user.pekerjaan);
					strcpy(user.uname, user.uname);

					if(user.tot_poin < 2000)
					{
						strcpy(user.rank, user.rank);						
					} else if(user.tot_poin == 2000)
					{
						strcpy(user.rank, "Elite");						
					} else if(user.tot_poin == 4000)
					{
						strcpy(user.rank, "Master");						
					} else if(user.tot_poin == 6000)
					{
						strcpy(user.rank, "Grandmaster");						
					} else if(user.tot_poin == 7000)
					{
						strcpy(user.rank, "Epic");						
					} else if(user.tot_poin == 8000)
					{
						strcpy(user.rank, "Legend");						
					} else if(user.tot_poin == 10000)
					{
						strcpy(user.rank, "Mythic");						
					} else if(user.tot_poin > 10000)
					{
						strcpy(user.rank, "Mythical Glory");												
					}
					
					if(strcmp(level,"Beginner")==0)
					{
						user.poinBeginner = user.poinBeginner+1000;												
						user.poinEasy = user.poinEasy;												
						user.poinMedium = user.poinMedium;												
						user.poinHard = user.poinHard;									
					} else if(strcmp(level,"Easy")==0)
					{
						user.poinBeginner = user.poinBeginner;												
						user.poinEasy = user.poinEasy+1000;												
						user.poinMedium = user.poinMedium;												
						user.poinHard = user.poinHard;															
					} else if(strcmp(level,"Medium")==0)
					{
						user.poinBeginner = user.poinBeginner;												
						user.poinEasy = user.poinEasy;												
						user.poinMedium = user.poinMedium+1000;												
						user.poinHard = user.poinHard;															
					} else if(strcmp(level,"Hard")==0)
					{
						user.poinBeginner = user.poinBeginner;												
						user.poinEasy = user.poinEasy;												
						user.poinMedium = user.poinMedium;												
						user.poinHard = user.poinHard+1000;															
					}
					
					UserNow = user;
					
					fseek(fpUser, (long) -sizeof(Users), SEEK_CUR);
					fwrite(&user, sizeof(Users), 1, fpUser);
					fclose(fpUser);
				}
			}
		}
		
	   	if((fpHistory = fopen("assets/bin/history.dat","ab")) == '\0'){
	       	printf("Error! File Tidak Dapat Dibuka...");
			MessageBeep(0);       	
		    exit(1);
		} else 
		{
			history.id_history = random_number(1111, 9999);
			history.user = user;
			strcpy(history.poin, "+1000");
			history.all_poin = user.tot_poin;
			strcpy(history.difficulty, level);
			history.timestamp = GetNow();

			if(strcmp(level,"Beginner")==0)
			{
				if(user.poinBeginner==1000)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinBeginner==2000)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinBeginner>=3000)
				{
					strcpy(history.level, "Level 3");
				}
			} else if(strcmp(level,"Easy")==0){
				if(user.poinEasy==1000)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinEasy==2000)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinEasy>=3000)
				{
					strcpy(history.level, "Level 3");
				}
			} else if(strcmp(level,"Medium")==0){
				if(user.poinMedium==1000)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinMedium==2000)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinMedium>=3000)
				{
					strcpy(history.level, "Level 3");
				}
			} else if(strcmp(level,"Hard")==0){
				if(user.poinHard==1000)
				{
					strcpy(history.level, "Level 1");			
				} else if(user.poinHard==2000)
				{
					strcpy(history.level, "Level 2");				
				} else if(user.poinHard>=3000)
				{
					strcpy(history.level, "Level 3");
				}
			}
			fwrite(&history, sizeof(History), 1, fpHistory);
			fclose(fpHistory);
		}		
		
		getch();
		system("cls");
		Beep(700, 40);
		play_option(UserNow);
	}
}
