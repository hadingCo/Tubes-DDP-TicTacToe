#include "sipaling_header.h"

int scorePlayerX = 0;
int scorePlayerO = 0;

void permainan5x5() {
    int n = 4;
    char papan[SIZE_5][SIZE_5];
    char pemain = 'X';
    TeksHeader();

    for (int i = 0; i < SIZE_5; i++) {
        for (int j = 0; j < SIZE_5; j++) {
            papan[i][j] = '-';
        }
    }

    cetakPapan5(SIZE_5, papan);

    while (!cekPapan5(SIZE_5, papan) && !cekMenang5(n, papan, pemain)) {
        system("cls");
        TeksHeader();
        DisplayNama();
        cetakPapan5(SIZE_5, papan);
        int row, col;
        printf("Giliran pemain %c. Masukkan baris dan kolom (1-%d): ", pemain, n);
        scanf("%d %d", &row, &col);

        if (papan[row - 1][col - 1] == '-') {
            papan[row - 1][col - 1] = pemain;
        } else {
            printf("Posisi sudah diisi.\n");
            continue;
        }

        if (cekMenang5(n, papan, pemain)) {
            if (pemain == 'X'){
                scorePlayerX++;
            	system("cls");                    
                TeksMenangX();
            } else {
                scorePlayerO++;
            	system("cls");                    
                TeksMenangO();
            }

            break;
        }

        if (pemain == 'X') {
            pemain = 'O';
        } else {
            pemain = 'X';
        }

        cetakPapan5(SIZE_5, papan);
    }

    if (cekPapan5(SIZE_5, papan) && !cekMenang5(n, papan, pemain)) {
		system("cls");
        TeksTie();
    }
	retryMenu(&scorePlayerX, &scorePlayerO);
}

void cetakPapan5(int n, char papan[SIZE_5][SIZE_5]) {
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

bool cekMenang5(int n, char papan[SIZE_5][SIZE_5], char pemain) {
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

bool cekPapan5(int n, char papan[SIZE_5][SIZE_5]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (papan[i][j] == '-') return false;
        }
    }
    return true;
}
