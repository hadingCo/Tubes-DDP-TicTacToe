#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//Prosedur
void TeksHeader();
void MenuAwal();
void KeluarAwal();
void PilihMode();
void MasukkanPemain();
void DisplayNama();
void Permainan();
void timer();
void retryMenu();

//Variabel
int a;
int b;
char key;
char NamaPemain1[50], NamaPemain2[50];


void PilihBoard();
void DisplayPilihBoard();

void delay(int ms);

void displayMenu(int tombol);
void PilihanTombol(int tombol);
void displayRetry(int tombol2, int scoreX, int scoreO);

//3x3
#define SIZE_3 3
#define SIZE_3 3
void cetakPapan3(int n, char papan[SIZE_3][SIZE_3]);
bool cekMenang3(int n, char papan[SIZE_3][SIZE_3], char pemain);
bool cekPapan3(int n, char papan[SIZE_3][SIZE_3]);
void permainan3x3();


//5x5
#define SIZE_5 5
void cetakPapan5(int n, char papan[SIZE_5][SIZE_5]);
bool cekMenang5(int n, char papan[SIZE_5][SIZE_5], char player);
bool cekPapan5(int n, char papan[SIZE_5][SIZE_5]);
void permainan5x5();

//7x7
#define SIZE_7 7
void cetakPapan7(int n, char papan[SIZE_7][SIZE_7]);
bool cekMenang7(int n, char papan[SIZE_7][SIZE_7], char player);
bool cekPapan7(int n, char papan[SIZE_7][SIZE_7]);
void permainan7x7();