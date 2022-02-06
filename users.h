#ifndef users_H
#define users_H

#define ENTER 13
#define TAB 9
#define BKSP 8

typedef struct
{
	int id_user;
	char uname[30];
	char name[30];
	char pass[30];
	int usia;
	char pekerjaan[50];
	char gender[10];
	char rank[50];
	int tot_poin;
	int poinBeginner;
	int poinEasy;
	int poinMedium;
	int poinHard;
} Users;

void profil_user(Users userParams);

void login();

void register_user();

void reset_data(Users userParams);

#endif
