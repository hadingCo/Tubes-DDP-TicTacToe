#include "sipaling_header.h"


//3x3
void permaianan3x3(){
    int a;
    char board[3][3];
    create_board3(board);
    TeksHeader();
    a=3;
    
    int i, j;
    char player = 'X';
    bool game_over = false;
    int moves = 0;
	
    while (!game_over) {
        system("cls");
        TeksHeader();
        DisplayNama();
        drawBoard3(a,board);
        printf("\nPlayer %c, enter your move: ", player);
        scanf("%d %d", &i, &j);
        if (is_valid_move(board, i-1, j-1)) {
            board[i-1][j-1] = player;
            moves++;

            if (check_winner3(board, player)) {
                system("cls");
                TeksHeader();
                DisplayNama();
                drawBoard3(a,board);
                printf("\nSelamat, Player %c menang!\n", player);
                break;
            }

            if (moves == 9) {
                system("cls");
                TeksHeader();
                DisplayNama();
                drawBoard3(a,board);
                printf("\nIt's a tie!\n");
                break;
            }

            player = (player == 'X') ? 'O' : 'X'; // Switch player
        } else {
            printf("\nInvalid move, try again.\n");
        }
    }
}



//void drawLine3(int n) {
//    for (int i = 0; i < n; i++) {
//        printf("%*s",100,"----");
//    }
//    printf("\n");
//}


void drawBoard3(int n, char board[SIZE_3][SIZE_3]) {
    // Assuming a fixed terminal width for demonstration purposes
    int terminalWidth = 186;

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



bool is_valid_move(char board[SIZE_3][SIZE_3], int i, int j) {
    return (board[i][j] == ' ');
}

bool check_winner3(char board[SIZE_3][SIZE_3], char player) {
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

void print_board3(char board[SIZE_3][SIZE_3]) {
    printf("\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void create_board3(char board[SIZE_3][SIZE_3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';

        }
        
    }
}


