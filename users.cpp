#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "tools.h"
#include "interface.h"
#include "users.h"
#include "game.h"

void profil_user(Users userParams)
{
	FILE *fp;
	Users user;
	
	if((fp=fopen("assets/bin/user.dat","rb"))==NULL){
		printf("File Tidak Dapat Dibuka\n");
	 	exit(1);
	}
	
	title('n');
	printf("\n\n\n\n\n\n");
	printf("  \t\t    --------------------------------------------------------------------------------------------------------------------------------\n");
	printf("  \t\t    |        %-15s     |   %-10s |    %-10s   |   %-5s  |   %-10s |  %-5s |  %-10s |  %-5s  |\n","Full Name", "Username", "Password", "Age", "Job Title", "Gender", "Rank", "Total Poin");
	printf("  \t\t    --------------------------------------------------------------------------------------------------------------------------------\n");
	
	
	while(fread(&user,sizeof(user),1,fp)==1)
	{
		if(user.id_user==userParams.id_user)
		{
			printf("  \t\t    |      %-15s       |   %-10s |    %-10s   |   %-5d  |   %-10s |  %-5s  |  %-10s |       %-5d  |\n", user.name, user.uname, user.pass, user.usia, user.pekerjaan, user.gender, user.rank, user.tot_poin);
			printf("  \t\t    --------------------------------------------------------------------------------------------------------------------------------\n");			

			if(user.poinBeginner==0)
			{
				printf("\n\t\t    Beginner : Level 1\n");
			} else if(user.poinBeginner==1000)
			{
				printf("\n\t\t    Beginner : Level 2\n");			
			} else if(user.poinBeginner>=2000)
			{
				printf("\n\t\t    Beginner : Level 3\n");			
			}
			
			if(user.poinEasy==0)
			{
				printf("\n\t\t    Easy     : Level 1\n");			
			} else if(user.poinEasy==1000)
			{
				printf("\n\t\t    Easy     : Level 2\n");				
			} else if(user.poinEasy>=2000)
			{
				printf("\n\t\t    Easy     : Level 2\n");				
			}
			
			if(user.poinMedium==0)
			{
				printf("\n\t\t    Medium   : Level 1\n");			
			} else if(user.poinMedium==1000)
			{
				printf("\n\t\t    Medium   : Level 2\n");
			} else if(user.poinMedium>=2000)
			{
				printf("\n\t\t    Medium   : Level 3\n");
			}
			
			if(user.poinHard==0)
			{
				printf("\n\t\t    Hard     : Level 1\n");
			} else if(user.poinHard==1000)
			{
				printf("\n\t\t    Hard     : Level 2\n");
			} else if(user.poinHard>=2000)
			{
				printf("\n\t\t    Hard     : Level 3\n");				
			} 
		}
	}
	
	fclose(fp);
	
	printf("\n\n\n  \t\t    Press any key to continue... ");
	getch();
	system("cls");
	play_option(user);	
}

void reset_data(Users userParams)
{
	History history;
	Users user;
	FILE *fpUser, *fpHistory, *temp;
	if((fpUser = fopen("assets/bin/user.dat","rb+")) == NULL){
       	printf("Error! File Tidak Dapat Dibuka...");
	    exit(1);
	} else 
	{
		while(fread(&user, sizeof(Users), 1, fpUser)==1){
			if(user.id_user==userParams.id_user){
				user.poinBeginner = 0;
				user.poinEasy = 0;
				user.poinMedium = 0;
				user.poinHard = 0;
				user.tot_poin = 0;
				fseek(fpUser, (long) -sizeof(Users), SEEK_CUR);
				fwrite(&user, sizeof(Users), 1, fpUser);
				fclose(fpUser);
			}
		}
	}
	
	temp = fopen("assets/bin/temp.dat","ab");
	if((fpHistory = fopen("assets/bin/history.dat","rb+")) == NULL){
       	printf("Error! File Tidak Dapat Dibuka...");
	    exit(1);
	} else 
	{
		while(fread(&history, sizeof(History), 1, fpHistory)==1)
		{
			if(history.user.id_user!=userParams.id_user)
			{
				fwrite(&user, sizeof(Users), 1, temp);
			}
		}
		fclose(fpHistory);
		fclose(temp);
		remove("assets/bin/history.dat");
		rename("assets/bin/temp.dat","assets/bin/history.dat");
	}
	system("cls");
	play_option(user);	
}

void login()
{
    FILE *fp;
    char c, ch, uname[30], pass[30];
    Users user;

    title('n');
    printf("\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t  =============================== LOGIN ===============================\n");
    printf("\n\n\t\t\t\t\t\t\t\t\tENTER USERNAME: "); fflush(stdin); scanf("%s",uname);
    printf("\n\n\t\t\t\t\t\t\t\t\tENTER PASSWORD: ");
    int i=0;
    while(true){
    	ch = getch();
    	if(ch == ENTER || ch == TAB){
    		pass[i] = '\0';
    		break;
		} else if (ch == BKSP){
			if(i > 0){
				i--;
				printf("\b \b");
			} 
		} else {
			pass[i++] = ch;
			printf("* \b");
		}
	}
	if((fp = fopen("assets/bin/user.dat","rb")) == NULL){
       	printf("Error! File Tidak Dapat Dibuka...");
	    exit(1);
	} else 
	{
		while(fread(&user, sizeof(Users), 1, fp)==1)
		{
			if(strcmp(uname,user.uname)==0 && strcmp(pass,user.pass)==0)
			{
	            printf("\n\n\n\t\t\t\t\t\t  =====================================================================\n");
				marquee_text("\n\n\t\t\t\t\t\t\t\t  \xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3",1999900);
				printf("\n\n\n\t\t\t\t\t\t\t\t\t    Login Successfully!\n\n\n");
	            printf("\t\t\t\t\t\t\t\t       Press any key to continue . . .");
				getch();
				system("cls");
	            play_option(user);
			} else if (strcmp(uname,user.uname)==0 || strcmp(pass,user.pass)==0){
	          	printf("\n\n\n\t\t\t\t\t\t  =====================================================================\n");
				marquee_text("\n\n\t\t\t\t\t\t\t\t  \xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3",1999900);
	            printf("\n\n\n\t\t\t\t\t\t\t\t\tWRONG PASSWORD!! Not %s??",uname);
	            printf("\n\n\t\t\t\t\t\t\t       (Press 'Y' to re-login or 'N' to back to Menu)");
	            if(getch()=='y'||getch()=='Y'){
	            	system("cls");
	            	login();	
				}else if(getch()=='N'||getch()=='n'){
					menu_login();
				}
			} else {
	          	printf("\n\n\n\t\t\t\t\t\t  =====================================================================\n");
				marquee_text("\n\n\t\t\t\t\t\t\t\t  \xb3\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xb3",1999900);
	            printf("\n\n\n\t\t\t\t\t\t\t\t       You are not a Registered User.\n \t\t\t\t\t\t\t\t(Press 'Y' to re-login or 'N' to register)");
	            if(getch()=='y'||getch()=='Y'){
		            system("cls");
	            	login();	
				}else if(getch()=='n'||getch()=='N'){
			    	system("cls");
		            register_user();
				}	
			}
			fclose(fp);
		}	
	}
}

void register_user()
{
    FILE *fp;
    Users user;
    char ch, c;
	int pilihan;
    
	if((fp = fopen("assets/bin/user.dat","ab")) == NULL){
		printf("Error! File Tidak Dapat Dibuka...");
      	exit(1);
	} else 
	{
	    title('n');
	    printf("\n\n\n");
	    printf("\n\n\n\t\t\t\t\t\t   ============================= REGISTER =============================\n\n");
	       
		user.id_user = random_number(10000,99999);

		strcpy(user.rank, "Warrior");

		user.poinBeginner = 0;
		user.poinEasy = 0;
		user.poinMedium = 0;
		user.poinHard = 0;
		user.tot_poin = 0;
		
	    printf("\n\t\t\t\t\t\t\t\t  ENTER FULL NAME\t: "); fflush(stdin); gets(user.name);
	
	    printf("\n\t\t\t\t\t\t\t\t  ENTER USERNAME\t: "); fflush(stdin); scanf("%s", &user.uname);
	        
	    printf("\n\t\t\t\t\t\t\t\t  ENTER PASSWORD\t: ");
	    int i=0;
	    while(true){
	    	ch = getch();
	    	if(ch == ENTER || ch == TAB){
	    		user.pass[i] = '\0';
	    		break;
			} else if (ch == BKSP){
				if(i > 0){
					i--;
					printf("\b \b");
				} 
			} else {
				user.pass[i++] = ch;
				printf("* \b");
			}
		}
		
		printf("\n\n\t\t\t\t\t\t\t\t  ENTER AGE\t\t: "); fflush(stdin); scanf("%d",&user.usia);
		
		printf("\n\t\t\t\t\t\t\t\t  ENTER JOB TITLE\t: "); fflush(stdin); scanf("%s",&user.pekerjaan);
	  
	  	printf("\n\t\t\t\t\t\t\t\t  ENTER GENDER (M/F)\t: "); fflush(stdin); scanf("%s",&user.gender);	
    	
	    fwrite(&user,sizeof(Users),1,fp);
	    fclose(fp);
      
	    printf("\n\n\t\t\t\t\t\t   ====================================================================");
        printf("\n\n\t\t\t\t\t\t\t      Press enter if you agree with the data above.");
        if((c=getch()) == 13)
        {
	        system("cls");
	        title('n');
	        printf("\n\n\n");
	        printf("\n\n\n\t\t\t\t\t\t   ======================================================================\n");
	        printf("\n\n\t\t\t\t\t\t\t\t\tYou are successfully registered!");
	        printf("\n\n\t\t\t\t\t\t\t\t\tTry login your account?\n\n\t\t  ");
	        printf("\t\t\t\t\t\t\t> PRESS 1 FOR YES\n\n\t\t\t\t\t\t\t\t\t> PRESS 2 FOR NO\n\n\t\t\t\t");
	        printf("\n\n\n\t\t\t\t\t\t   ======================================================================\n");
	        printf("\n\n\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE: ");
	        scanf("%d",&pilihan);
	        switch(pilihan)
	        {
	            case 1: system("cls");
	                login();
	            break;
	            case 2: system("cls");
	                menu_login();
	            break;
	        }
        }	
	}    
    getch();
 }
