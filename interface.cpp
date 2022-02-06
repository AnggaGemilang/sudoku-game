#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tools.h"
#include "users.h"
#include "interface.h"
#include "game.h"

void menu_login(){
	char pilihan;
	system("cls");
	title('y');
	printf("\n\n");
	XY:
	printf("\n\n\n\n\n\t\t\t\t\t\t   =====================================================================");
	printf("\n\t\t\t\t\t\t  ||                                                                   ||");
	printf("\n\t\t\t\t\t\t  ||");
	printf("\t\t\t       W E L C O M E\t\t\t       ||");
	printf("\n\t\t\t\t\t\t  ||                                                                   ||");
	printf("\n\t\t\t\t\t\t  ||");
	printf("  Before playing the game, please register/login to your account!  ||");
	printf("\n\t\t\t\t\t\t  ||                                                                   ||");
	printf("\n\t\t\t\t\t\t   =====================================================================");
	printf("\n\n\n\t\t\t\t\t\t\t\t      [1] LOGIN\t\t[2] REGISTER");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t    ENTER YOUR CHOICE: ");
	scanf("%d",&pilihan);
	switch(pilihan)
	{
  		case 1: 
			system("cls");
        	login();
      	break;
    	case 2: 
			system("cls");
       		register_user();
        break;
   		default: 
		   printf("\n\n\t\t\t\tNO MATCH FOUND");
		break;	
		printf("\n\n\t\t\tPress Enter to re-Enter the choice");	
        if(getch()==13) system("cls"); goto XY;
	}
}

void title(char mode){
	int i;
	for(i = 20; i < 147; i++)
	{
		gotoxy(i,18); printf("\xc4");
		if(mode=='y')
		{
			Sleep(7);
		}		
	}
	gotoxy(147,18); printf("\xd9");	
	for(i = 17; i > 2; i--)
	{
		gotoxy(147,i); printf("\xb3");		
		if(mode=='y')
		{
			Sleep(7);
		}
	}
	gotoxy(147,2); printf("\xbf");	
	for(i = 146; i > 20; i--)
	{
		gotoxy(i,2); printf("\xc4");		
		if(mode=='y')
		{
			Sleep(7);
		}
	}
	gotoxy(20,2); printf("\xda");	
	for(i = 3; i < 18; i++)
	{
		gotoxy(20,i); printf("\xb3");		
		if(mode=='y')
		{
			Sleep(7);
		}
	}
	gotoxy(20,18); printf("\xc0");	
	warna_teks(LIGHT_GREEN);
	gotoxy(30,6); printf("  ллллллллллл\n");
	gotoxy(30,7); printf("лл\n");
	gotoxy(30,8); printf("лл\n");
	gotoxy(30,9); printf("лл\n");
	gotoxy(30,10); printf("  ллллллллл\n");
	gotoxy(30,11); printf("           лл\n");
	gotoxy(30,12); printf("           лл\n");	
	gotoxy(30,13); printf("           лл\n");	
	gotoxy(30,14);printf("ллллллллллл \n");
	warna_teks(LIGHT_GRAY);
	gotoxy(127,6); printf("лл        лл\n");
	gotoxy(127,7); printf("лл        лл\n");
	gotoxy(127,8); printf("лл        лл\n");
	gotoxy(127,9); printf("лл        лл\n");
	gotoxy(127,10); printf("лл        лл\n");
	gotoxy(127,11); printf("лл        лл\n");
	gotoxy(127,12); printf("лл        лл\n");
	gotoxy(127,13); printf("лл        лл\n");
	gotoxy(127,14);printf("  лллллллл   \n");
	if(mode=='y')
	{
		Sleep(400);
	}
	warna_teks(YELLOW);
	gotoxy(50,6); printf("лл        лл\n");
	gotoxy(50,7); printf("лл        лл\n");
	gotoxy(50,8); printf("лл        лл\n");
	gotoxy(50,9); printf("лл        лл\n");
	gotoxy(50,10); printf("лл        лл\n");
	gotoxy(50,11); printf("лл        лл\n");
	gotoxy(50,12); printf("лл        лл\n");
	gotoxy(50,13); printf("лл        лл\n");
	gotoxy(50,14);printf("  лллллллл  \n");
	warna_teks(LIGHT_BLUE);
	gotoxy(107,6); printf("лл        лл\n");
	gotoxy(107,7); printf("лл      лл\n");
	gotoxy(107,8); printf("лл    лл\n");
	gotoxy(107,9); printf("лл  лл\n");
	gotoxy(107,10); printf("лллл\n");
	gotoxy(107,11); printf("лл  лл\n");
	gotoxy(107,12); printf("лл    лл\n");
	gotoxy(107,13); printf("лл      лл\n");
	gotoxy(107,14);printf("лл        лл\n");	
	if(mode=='y')
	{
		Sleep(400);
	}
	warna_teks(RED);
	gotoxy(69,6); printf("ллллллллл\n");
	gotoxy(69,7); printf("лл        лл\n");
	gotoxy(69,8); printf("лл        лл\n");
	gotoxy(69,9); printf("лл        лл\n");
	gotoxy(69,10); printf("лл        лл\n");
	gotoxy(69,11); printf("лл        лл\n");
	gotoxy(69,12); printf("лл        лл\n");
	gotoxy(69,13); printf("лл        лл\n");	
	gotoxy(69,14);printf("лллллллллл  \n");
	warna_teks(PURPLE);
	gotoxy(88,6); printf("  лллллллл\n");
	gotoxy(88,7); printf("лл        лл\n");
	gotoxy(88,8); printf("лл        лл\n");
	gotoxy(88,9); printf("лл        лл\n");
	gotoxy(88,10); printf("лл        лл\n");
	gotoxy(88,11); printf("лл        лл\n");
	gotoxy(88,12); printf("лл        лл\n");
	gotoxy(88,13); printf("лл        лл\n");
	gotoxy(88,14);printf("  лллллллл   \n");
	warna_teks(WHITE);
//	Beep(300, 200);
}

void play_option(Users user)
{
	char pilihanUser,eorb;
	int i;
	mainMenu:
	title('n');
	for(i=65; i < 100; i++)
	{
		gotoxy(i,20); printf("\xc4");
	}
	gotoxy(64,20); printf("\xda");
	for(i=36; i > 20; i--)
	{
		gotoxy(64,i); printf("\xb3");
	}
	gotoxy(70,22); printf("======= MAIN MENU =======");
	for(i=64; i < 100; i++)
	{
		gotoxy(i,24); printf("\xc4");
	}
	gotoxy(100,20); printf("\xbf");
	for(i=36; i > 20; i--)
	{
		gotoxy(64,i); printf("\xb3");
	}
	gotoxy(64,36); printf("\xc0");
	for(i=65; i < 100; i++)
	{
		gotoxy(i,36); printf("\xc4");
	}
	gotoxy(100,35); printf("\xd9");
	for(i=36; i > 20; i--)
	{
		gotoxy(100,i); printf("\xb3");
	}	
	gotoxy(100,36); printf("\xd9");	
	gotoxy(78,26); printf("PLAY");
	gotoxy(78,28); printf("HOW TO PLAY");
	gotoxy(78,30); printf("DATA SAVED");
	gotoxy(78,32); printf("ABOUT");
	gotoxy(78,34); printf("QUIT GAME");

	gotoxy(20,20); printf("Selamat Datang, %s", user.name);
	pilihanUser = cursor_menu(5,73,26); //User memilih menu menggunakan tombol keyboard atas atau bawah
	switch(pilihanUser)
	{
		case 1:	{
			system("cls");
			title('n');
			warna_teks(WHITE);
			int i;
			for(i=65; i < 100; i++)
			{
				gotoxy(i,20); printf("\xc4");
			}
			gotoxy(64,20); printf("\xda");
			for(i=36; i > 20; i--)
			{
				gotoxy(64,i); printf("\xb3");
			}
			gotoxy(69,22); printf("======= DIFFICULTY ========");
			for(i=64; i < 100; i++)
			{
				gotoxy(i,24); printf("\xc4");
			}
			gotoxy(100,20); printf("\xbf");
			for(i=36; i > 20; i--)
			{
				gotoxy(64,i); printf("\xb3");
			}
			gotoxy(64,36); printf("\xc0");
			for(i=65; i < 100; i++)
			{
				gotoxy(i,36); printf("\xc4");
			}
			gotoxy(100,35); printf("\xd9");
			for(i=36; i > 20; i--)
			{
				gotoxy(100,i); printf("\xb3");
			}	
			gotoxy(100,36); printf("\xd9");	
			gotoxy(78,26); printf("BEGINNER");
			gotoxy(78,28); printf("EASY");
			gotoxy(78,30); printf("MEDIUM");
			gotoxy(78,32); printf("HARD");
			gotoxy(78,34); printf("BACK");
			gotoxy(20,20); printf("Selamat Datang, %s", user.name);
			pilihanUser = cursor_menu(5,73,26); //User memilih menu menggunakan tombol keyboard atas atau bawah
			switch(pilihanUser)
			{
				case 1:	{
					system("cls"); 
					play(user, 4, 4, 2, 2, 58, 28, "Beginner");
					break;
				}
				case 2:	{
					system("cls"); 
					play(user, 6, 6, 2, 3, 53, 27, "Easy");
					break;
				}
				case 3:	{
					system("cls"); 
					play(user, 8, 8, 2, 4, 50, 25, "Medium");
					break;
				}
				case 4:	{
					system("cls"); 
					play(user, 9, 9, 3, 3, 47, 24, "Hard");
					break;
				}
				case 5:	{
					system("cls"); 
					goto mainMenu;
					break;
				}									
			}
			break;
		}
		case 2:	{
			system("cls"); 
			
			FILE *f_tutorial;
			char teks[255];
			char kembali;
			
			if ((f_tutorial=fopen("assets/txt/tutorial.txt","rt")) == NULL)
			{
				printf("Error! opening file\r\n");
				exit(1);
			}
			while(fgets(teks, sizeof(teks), f_tutorial)){
        		printf("%s", teks);
    		}
			fclose(f_tutorial);
			printf("\n\n\n");
			printf("\t\t\t\tPress ENTER for back to Main Menu... ");
			getche();
			Beep(700, 40);
			system("cls");
			goto mainMenu;
			break;
		}
		case 3:	{
			ulangiTema:
			system("cls"); 
			int i;
			for(i=65; i < 100; i++)
			{
				gotoxy(i,20); printf("\xc4");
			}
			gotoxy(64,20); printf("\xda");
			for(i=30; i > 20; i--)
			{
				gotoxy(64,i); printf("\xb3");
			}
			gotoxy(70,22); printf("======= DATA SAVED =======");		
			for(i=64; i < 100; i++)
			{
				gotoxy(i,24); printf("\xc4");
			}
			gotoxy(100,20); printf("\xbf");
			for(i=34; i > 20; i--)
			{
				gotoxy(64,i); printf("\xb3");
			}
			gotoxy(64,34); printf("\xc0");
			for(i=65; i < 100; i++)
			{
				gotoxy(i,34); printf("\xc4");
			}
			gotoxy(100,34); printf("\xd9");	
			for(i=34; i > 20; i--)
			{
				gotoxy(100,i); printf("\xb3");
			}
			gotoxy(100,34); printf("\xd9");
			title('n');
			warna_teks(WHITE);
			gotoxy(78,26); printf("PROFILE");
			gotoxy(78,28); printf("HISTORY");
			gotoxy(78,30); printf("RESET DATA");
			gotoxy(78,32); printf("BACK");
			gotoxy(20,20); printf("Selamat Datang, %s", user.name);
			pilihanUser = cursor_menu(4,73,26); //User memilih menu menggunakan tombol keyboard atas atau bawah
			switch(pilihanUser)
			{
				case 1 : {
					system("cls");
					profil_user(user);
					break;
				}
				case 2 : {
					system("cls");
					history(user);
					break;
				}
				case 3 : {
					gotoxy(64,38); printf("\xc0");
					for(i=65; i < 100; i++)
					{
						gotoxy(i,38); printf("\xc4");
					}
					gotoxy(100,38); printf("\xd9");
					for(i=37; i > 32; i--)
					{
						gotoxy(100,i); printf("\xb3");
					}		
					gotoxy(64,38); printf("\xc0");
					for(i=37; i > 32; i--)
					{
						gotoxy(64,i); printf("\xb3");
					}
					ulangiReset:
					gotoxy(70,36); printf("Apakah Anda Yakin [Y/N]? "); pilihanUser = getch();
					if(pilihanUser=='y' || pilihanUser=='Y')
					{
						Beep(700, 40);
						reset_data(user);
					} else if(pilihanUser=='n' || pilihanUser=='N'){
						Beep(700, 40);
						system("cls");
						goto mainMenu;
					} else 
					{
						goto ulangiReset;
					}
					break;
				}
				case 4 : {
					system("cls"); 
					goto mainMenu;					
					break;
				}
			}			
			break;
		}
		case 4:	{
			system("cls"); 
			
			FILE *f_about;
			char teks[255];
			char kembali;
			
			if ((f_about=fopen("assets/txt/about.txt","rt")) == NULL)
			{
				printf("Error! opening file\r\n");
				exit(1);
			}
			
			while(fgets(teks, sizeof(teks), f_about)){
        		printf("%s", teks);
    		}
			fclose(f_about);
			printf("\n\n");
			printf("\t\t\tPress ENTER for back to Main Menu... ");
			getche();
			Beep(700, 40);
			system("cls");
			goto mainMenu;
			break;			
		}
		case 5:	{
			gotoxy(64,40); printf("\xc0");
			for(i=65; i < 100; i++)
			{
				gotoxy(i,40); printf("\xc4");
			}
			gotoxy(100,40); printf("\xd9");
			for(i=39; i > 34; i--)
			{
				gotoxy(100,i); printf("\xb3");
			}		
			gotoxy(64,40); printf("\xc0");
			for(i=39; i > 34; i--)
			{
				gotoxy(64,i); printf("\xb3");
			}
			ulangi:
			gotoxy(70,38); printf("Apakah Anda Yakin [Y/N]? "); pilihanUser = getch();
			if(pilihanUser=='y' || pilihanUser=='Y')
			{
				Beep(700, 40);
				exit();
			} else if(pilihanUser=='n' || pilihanUser=='N'){
				Beep(700, 40);
				system("cls");
				goto mainMenu;
			} else 
			{
				goto ulangi;
			}
			break;
		}		
	}
}
