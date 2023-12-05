#include "sipaling_header.h"



void permainan5x5() {
    int n = 4;
    char board[SIZE_5][SIZE_5];
    char player = 'X';

    for (int i = 0; i <= SIZE_5; i++) {
        for (int j = 0; j <= SIZE_5; j++) {
            board[i][j] = '-';
        }
    }

    drawBoard5(SIZE_5, board);

    while (!isFull5(n, board) && !checkWinner5(n, board, player)) {
        system("cls");
        drawBoard5(n, board);
        int row, col;
        printf("Giliran pemain %c. Masukkan baris dan kolom (1-%d): ", player, SIZE_5);
        scanf("%d %d", &row, &col);

        if (board[row - 1][col - 1] == '-') {
            board[row - 1][col - 1] = player;
        } else {
            printf("Posisi sudah diisi.\n");
            continue;
        }

        if (checkWinner5(n, board, player)) {
            printf("Selamat, pemain %c menang!\n", player);
            break;
        }

        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }

        drawBoard5(SIZE_5, board);
    }

    if (isFull5(n, board) && !checkWinner5(n, board, player)) {
        printf("Game berakhir seri.\n");
    }

}


void drawLine5(int n) {
    for (int i = 0; i < n; i++) {
        printf("----");
    }
    printf("\n");
}

void drawBoard5(int n, char board[SIZE_5][SIZE_5]) {
    drawLine5(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
        drawLine5(n);
    }
}

bool checkWinner5(int n, char board[SIZE_5][SIZE_5], char player) {
    for (int i = 0; i < n; i++) {
        int rowCount = 0, colCount = 0;
        for (int j = 0; j < n; j++) {
            if (board[i][j] == player) rowCount++;
            if (board[j][i] == player) colCount++;
        }
        if (rowCount == n || colCount == n) return true;
    }

    int diagonalCount = 0, antiDiagonalCount = 0;
    for (int i = 0; i < n; i++) {
        if (board[i][i] == player) diagonalCount++;
        if (board[i][n - i - 1] == player) antiDiagonalCount++;
    }
    if (diagonalCount == n || antiDiagonalCount == n) return true;

    return false;
}

bool isFull5(int n, char board[SIZE_5][SIZE_5]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '-') return false;
        }
    }
    return true;
}