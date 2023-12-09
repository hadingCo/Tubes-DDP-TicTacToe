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
void displayRetry(int tombol2);

//3x3
#define SIZE_3 3
void print_board3(char board[SIZE_3][SIZE_3]);
void drawLine3(int n);
void drawBoard3(int n, char board[SIZE_3][SIZE_3]);
bool check_winner3(char board[SIZE_3][SIZE_3], char player);
bool is_valid_move(char board[SIZE_3][SIZE_3], int i, int j);
void create_board3(char board[SIZE_3][SIZE_3]);
void permaianan3x3();

//5x5
#define SIZE_5 5

void drawLine5(int n);
void drawBoard5(int n, char board[SIZE_5][SIZE_5]);
bool checkWinner5(int n, char board[SIZE_5][SIZE_5], char player);
bool isFull5(int n, char board[SIZE_5][SIZE_5]);
void permainan5x5();

//7x7
#define SIZE_7 7

void drawLine7(int n);
void drawBoard7(int n, char board[SIZE_7][SIZE_7]);
bool checkWinner7(int n, char board[SIZE_7][SIZE_7], char player);
bool isFull7(int n, char board[SIZE_7][SIZE_7]);
void permainan7x7();


