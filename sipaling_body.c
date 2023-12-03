#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "sipaling_header.h"


void TeksHeader()
{
	printf("%*s\n",150," _____________________________________________________________________________________________________   ");
	printf("%*s\n",150," ||                                       Created By HadingCO                                        ||  ");
	printf("%*s\n",150," ||            _____   ___    ____     _____      _       ____     _____    ___    _____             ||  ");
	printf("%*s\n",150," ||           |_   _| |_ _|  / ___|   |_   _|    | |     / ___|   |_   _|  | _ |  | ____|            ||  ");
	printf("%*s\n",150," ||   _____     | |    | |  | |         | |     | _ |   | |         | |   | | | | |  _|      _____   ||  ");
	printf("%*s\n",150," ||  |_____|    | |    | |  | |___      | |    | ___ |  | |___      | |   | |_| | | |___    |_____|  ||  ");
	printf("%*s\n",150," ||             |_|   |___|  |____|     |_|   |_|   |_|  |____|     |_|    |___|  |_____|            ||  ");
	printf("%*s\n",150," ||                                                                                                  ||  ");
	printf("%*s\n",150," ||__________________________________________________________________________________________________||  ");
	printf("\n\n");
}

void MenuAwal()
{	
	b=1;
	printf("\n\n");
	printf("%*s\n",112,"> \033[33m(1) Start\033[0m <");
	printf("\n");
	printf("%*s\n",100," Exit ");
	
	while (a==0)
	{
		key = getch();
		switch (key)
		{
			case 'w':
				system("cls");
				TeksHeader();
				printf("\n");
				printf("%*s\n",112,"> \033[33m(1) Start\033[0m <");
				printf("\n");
				printf("%*s\n",100," Exit ");
				b=1;
				break;

				case 's':
				system("cls");
				TeksHeader();
				printf("\n");
				printf("%*s\n",100," Start ");
				printf("\n");
				printf("%*s\n",111,"> \033[33m(2) Exit\033[0m <");
				b=2;
				break;
		}
		switch (key)
		{
			case 13:
                if (b == 1) 
				{
					system("cls");
					TeksHeader();
                    PilihMode();
                    a = 1;
                }
				if (b == 2) 
				{
                    system("cls");
                    TeksHeader ();
					KeluarAwal ();
					a = 1;
                }
                break;
		}
	}
		
}

void PilihMode()
{
	a=0;
	b=0;
	b=1;
	printf("%*s\n\n",115,"\033[4mPilih Mode Permainan\033[0m");
	printf("%*s\n",129," > (1) \033[31mPlayer 1\033[0m Vs \033[34mPlayer 2\033[0m <");
	printf("\n");
	printf("%*s\n",107," Player Vs Komputer ");
	while (a==0)
	{
		key = getch();
		switch (key)
		{
			case 'w':
				system("cls");
				TeksHeader();
				printf("%*s\n\n",115,"\033[4mPilih Mode Permainan\033[0m");
				printf("%*s\n",129," > (1) \033[31mPlayer 1\033[0m Vs \033[34mPlayer 2\033[0m <");
				printf("\n");
				printf("%*s\n",107," Player Vs Komputer ");
				b=1;
				break;
			case 's':
				system("cls");
				TeksHeader();
				printf("%*s\n\n",115,"\033[4mPilih Mode Permainan\033[0m");
				printf("%*s\n",107," Player 1 Vs Player 2");
				printf("\n");
				printf("%*s\n",127,"> (2) \033[31mPlayer\033[0m Vs \033[32mKomputer\033[0m <");
				b=2;
				break;
		}
		switch (key) 
		{
            case 13:
                if (b == 1) 
				{
                    system("cls");
					TeksHeader();
                    MasukkanPemain();
					
                    a = 1; 
                }
				if (b == 2) 
				{
                    system("cls");
					TeksHeader();
                    PilihBoard();
					a =1;
                }
                break;
        }
	}
}

// AKHIR DARI PROGRAM
void KeluarAwal()
{
	printf("%*s\n",125,"  __                         __                       ");
	printf("%*s\n",125," /__)  _      _  _  _  _    / _)  _  _  _  /  /  '  _ ");
	printf("%*s\n",125,"/     /  ()  (/ /  (/ //)  /(_)  (- /  (/ /( /) /  /  ");
	printf("%*s\n",125,"            _/                                        ");
	printf("\n\n\n");
    exit(1);
	
}

//INPUT NAMA PEMAIN 1 DAN PEMAIN 2
void MasukkanPemain()
{	
	printf("%*s\n\n",115 ,"\033[4mMasukkan Nama Pemain\033[0m");
	printf("%*s",100,"\033[31mPlayer 1\033[0m -> ");
	scanf("%[^\n]%*c", NamaPemain1);
	printf("%*s",100,"\033[34mPlayer 2\033[0m -> ");
	scanf("%[^\n]%*c", NamaPemain2);
}

// MENAMPILKAN NAMA PEMAIN
void DisplayNama()
{
	system("cls");
	TeksHeader();
	printf("%*s",50, "|");
	printf("\033[31m%s (X)\033[0m|", NamaPemain1);
	printf("%*s",40, "|");
	printf("\033[34m%s (O)\033[0m|", NamaPemain2);
}

// MEMILIH UKURAN BOARD
void PilihBoard()
{
	int tombol = 1;

    while (1) {
        displayMenu(tombol);

        char key = getch(); 

        if (key == 's' && tombol < 3) {
            tombol++;
        } else if (key == 'w' && tombol > 1) {
            tombol--;
        } else if (key == 13) { 
            PilihanTombol(tombol);
            break; 
        }
    }
}

void PilihanTombol(int tombol) {
    switch (tombol) {
        case 1:
        	system("cls");
            printf("TIGA KALI TIGA\n");
			permaianan3x3();

            break;
        case 2:
        	system("cls");
            printf("LIMA KALI LIMA\n");
            break;
        case 3:
        	system("cls");
            printf("TUJUH KALI TUJUH\n");
            break;
        default:
            break;
    }
}

void displayMenu(int tombol) {
    system("cls"); // Clear the console screen (Windows-specific)
	TeksHeader();
    printf("%*s\n\n",113,"\033[4mPilih Ukuran Board\033[0m");
    printf("%*s",104, (tombol == 1) ? "\033[34m> \033[0m" : "");
    printf("3x3 %s\n\n", (tombol == 1) ? "\033[34m<\033[0m" : "");
    printf("%*s",104, (tombol == 2) ? "\033[34m> \033[0m" : "");
    printf("5x5 %s\n\n", (tombol == 2) ? "\033[34m<\033[0m" : "");
    printf( "%*s",104, (tombol == 3) ? "\033[34m> \033[0m" : "");
    printf("7x7 %s\n\n", (tombol == 3) ? "\033[34m<\033[0m" : "");
}





// TIMER 10 DETIK KESEMPATAN TIAP PEMAIN
void delay(ms)
{
	clock_t timeDelay = ms + clock();
	while (timeDelay > clock() );
}
int counter()
{
	while(!kbhit() && flag == 0)
	{
		if(second <= 11 && second >= 1)
		{
			delay(1000);
			second--;
		}
		printData();
		if(second == 0)
		{
			break;
		}
	}
	MenuAwal();
}

int printData()
{
	system("cls");
	printf("---------------------------\n");
	printf("%d Detik",second);
	printf("\n------------------------");
	
}

//3x3
void permaianan3x3(){
    int a;
    char board[3][3];
    create_board(board);
    printf("Masukkan ukuran papan: ");
    scanf("%d", &a);
    

    int i, j;
    char player = 'X';
    bool game_over = false;
    int moves = 0;

    while (!game_over) {
        drawBoard(a,board);
        printf("\nPlayer %c, enter your move: ", player);
        scanf("%d %d", &i, &j);

        if (is_valid_move(board, i-1, j-1)) {
            board[i-1][j-1] = player;
            moves++;

            if (check_winner(board, player)) {
                drawBoard(a,board);
                printf("\nSelamat, Player %c menang!\n", player);
                break;
            }

            if (moves == 9) {
                drawBoard(a,board);
                printf("\nIt's a tie!\n");
                break;
            }

            player = (player == 'X') ? 'O' : 'X'; // Switch player
        } else {
            printf("\nInvalid move, try again.\n");
        }
    }

    return 0;
}



void drawLine(int n) {
    for (int i = 0; i < n; i++) {
        printf("%*s",100,"----");
    }
    printf("\n");
}


void drawBoard(int n, char board[3][3]) {
    // Assuming a fixed terminal width for demonstration purposes
    int terminalWidth = 110;

    // Calculate the left padding to center the board
    int leftPadding = (terminalWidth - (n * 4 - 1)) / 2;

    for (int i = 0; i < n; i++) {
                // Move cursor to the middle before printing the line
        


        // Move cursor to the middle before printing the line
        printf("\e[%dG", leftPadding);

        for (int j = 0; j < n; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");

        // Move cursor to the middle before printing the line
        printf("\e[%dG", leftPadding);

        // Draw the horizontal line
        for (int k = 0; k < n ; k++) {
            printf("----");
        }

        printf("\n");
    }
}



bool is_valid_move(char board[3][3], int i, int j) {
    return (board[i][j] == ' ');
}

bool check_winner(char board[3][3], char player) {
    // Check horizontal and vertical lines
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

void print_board(char board[3][3]) {
    printf("\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void create_board(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';

        }
        
    }
}


