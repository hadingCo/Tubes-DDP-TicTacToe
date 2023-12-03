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

//Variabel
int a;
int b;
char key;
char NamaPemain1[50], NamaPemain2[50];



void PilihBoard();
void DisplayPilihBoard();


int second = 11;flag = 0;


void delay(ms);

int printData();

void displayMenu(int tombol);
void PilihanTombol(int tombol);
