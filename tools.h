#ifndef tools_H
#define tools_H

typedef struct {
	int hari;
	int bulan;
	int tahun;
	int jam;
	int menit;
	int detik;
}Timestamp;

Timestamp GetNow();

void warna_teks(int warna);

int random_number(int batasBawah, int batasAtas);

void loop(int jml, const char *karakter);

char *to_string(int angka);

void gotoxy(int x, int y);

void exit();

// Procedure untuk menampilkan teks berdasarkan koordinat gotoxy()
void printg(int a, int b, const char *teks);

// Procedure untuk teks berjalan
void marquee_text(const char *kalimat, int speed);

#endif
