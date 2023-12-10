#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE_7 3
void drawLine7(int n);
void drawBoard7(int n, char papan[SIZE_7][SIZE_7]);
bool checkWinner7(int n, char papan[SIZE_7][SIZE_7], char player);
bool isFull7(int n, char papan[SIZE_7][SIZE_7]);


int main() {
    int n = 3;
    char papan[SIZE_7][SIZE_7];
    char pemain = 'X';

    for (int i = 0; i < SIZE_7; i++) {
        for (int j = 0; j < SIZE_7; j++) {
            papan[i][j] = '-';
        }
    }

    drawBoard7(SIZE_7, papan);

    while (!isFull7(SIZE_7, papan) && !checkWinner7(n, papan, pemain)) {
        system("cls");
        // TeksHeader();
        // DisplayNama();
        drawBoard7(SIZE_7, papan);
        int row, col;
        printf("Giliran pemain %c. Masukkan baris dan kolom (1-%d): ", pemain, n);
        scanf("%d %d", &row, &col);

        if (papan[row - 1][col - 1] == '-') {
            papan[row - 1][col - 1] = pemain;
        } else {
            printf("Posisi sudah diisi.\n");
            continue;
        }

        if (checkWinner7(n, papan, pemain)) { 
            drawBoard7(SIZE_7, papan);
            printf("Selamat, pemain %c menang!\n", pemain);
            break;
        }

        if (pemain == 'X') { 
            pemain = 'O';
        } else {
            pemain = 'X';
        }

        drawBoard7(SIZE_7, papan);
    }

    if (isFull7(SIZE_7, papan) && !checkWinner7(n, papan, pemain)) {
        printf("Game berakhir seri.\n");
    }

return 0;
}

void drawBoard7(int n, char papan[SIZE_7][SIZE_7]) {
  // Assuming a fixed terminal width for demonstration purposes
    int terminalWidth = 194;

    // Calculate the left padding to center the papan
    int leftPadding = (terminalWidth - (n * 4 - 1)) / 2;

    for (int i = 0; i < n; i++) {
                // Move cursor to the middle before printing the line
        
        // Move cursor to the middle before printing the line
        printf("\e[%dG", leftPadding);

        for (int j = 0; j < n; j++) {
            printf("| %c ", papan[i][j]);
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


bool checkWinner7(int n, char papan[SIZE_7][SIZE_7], char pemain) {
    for (int i = 0; i < n; i++) {
        int rowCount = 0, colCount = 0;
        for (int j = 0; j < n; j++) {
            if (papan[i][j] == pemain) rowCount++;
            if (papan[j][i] == pemain) colCount++;
        }
        if (rowCount == n || colCount == n) return true;
    }

    int diagonalCount = 0, antiDiagonalCount = 0;
    for (int i = 0; i < n; i++) {
        if (papan[i][i] == pemain) diagonalCount++;
        if (papan[i][n - i - 1] == pemain) antiDiagonalCount++;
    }
    if (diagonalCount == n || antiDiagonalCount == n) return true;

    return false;
}

bool isFull7(int n, char papan[SIZE_7][SIZE_7]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (papan[i][j] == '-') return false;
        }
    }
    return true;
}
