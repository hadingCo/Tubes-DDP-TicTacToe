#include "sipaling_header.h"



void permainan7x7() {
    int n = 5;
    char board[SIZE_7][SIZE_7];
    char player = 'X';

    for (int i = 0; i < SIZE_7; i++) {
        for (int j = 0; j < SIZE_7; j++) {
            board[i][j] = '-';
        }
    }

    drawBoard7(SIZE_7, board);

    while (!isFull7(SIZE_7, board) && !checkWinner7(n, board, player)) {
        system("cls");
        TeksHeader();
        DisplayNama();
        drawBoard7(SIZE_7, board);
        int row, col;
        printf("Giliran pemain %c. Masukkan baris dan kolom (1-%d): ", player, n);
        scanf("%d %d", &row, &col);

        if (board[row - 1][col - 1] == '-') {
            board[row - 1][col - 1] = player;
        } else {
            printf("Posisi sudah diisi.\n");
            continue;
        }

        if (checkWinner7(n, board, player)) {
            printf("Selamat, pemain %c menang!\n", player);
            break;
        }

        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }

        drawBoard7(SIZE_7, board);
    }

    if (isFull7(SIZE_7, board) && !checkWinner7(n, board, player)) {
        printf("Game berakhir seri.\n");
    }


}

void drawBoard7(int n, char board[SIZE_7][SIZE_7]) {
  // Assuming a fixed terminal width for demonstration purposes
    int terminalWidth = 194;

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
        for (int i = 0; i < n; i++) {
            printf("----");
        }

        printf("\n");
    }
}


bool checkWinner7(int n, char board[SIZE_7][SIZE_7], char player) {
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

bool isFull7(int n, char board[SIZE_7][SIZE_7]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '-') return false;
        }
    }
    return true;
}
