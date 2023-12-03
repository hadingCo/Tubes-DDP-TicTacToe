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


//3x3
void drawLine(int n);
void drawBoard(int n, char board[3][3]);
bool check_winner(char board[3][3], char player);
bool is_valid_move(char board[3][3], int i, int j);
void create_board(char board[3][3]);
void permaianan3x3();