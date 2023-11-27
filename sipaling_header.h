#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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
char Papan[3][3];
char Player1 = 'X';
char Player2 = 'O';
char Komputer = 'O';


int CekKosong();
void ResetPapan();
void CetakPapan();
void PergerakanPemain();
void PergerakanKomputer();
void CekMenang();
void CetakMenang();
