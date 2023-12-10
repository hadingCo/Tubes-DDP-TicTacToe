#include "sipaling_header.h"



void permainan7x7() {
    int n = 5;
    char papan[SIZE_7][SIZE_7];
    char pemain = 'X';

    for (int i = 0; i < SIZE_7; i++) {
        for (int j = 0; j < SIZE_7; j++) {
            papan[i][j] = '-';
        }
    }

    cetakPapan7(SIZE_7, papan);

    while (!cekPapan7(SIZE_7, papan) && !cekMenang7(n, papan, pemain)) {
        system("cls");
        TeksHeader();
        DisplayNama();
        cetakPapan7(SIZE_7, papan);
        int row, col;
        printf("Giliran pemain %c. Masukkan baris dan kolom (1-%d): ", pemain, n);
        scanf("%d %d", &row, &col);

        if (papan[row - 1][col - 1] == '-') {
            papan[row - 1][col - 1] = pemain;
        } else {
            printf("Posisi sudah diisi.\n");
            continue;
        }

        if (cekMenang7(n, papan, pemain)) { 
            if (pemain == "X"){
                TeksMenangX();
                printf("Selamat, pemain %c menang!\n", pemain);
            }else{
                TeksMenangO();
                printf("Selamat, pemain %c menang!\n", pemain);
            }
            
            break;
        }

        if (pemain == 'X') { 
            pemain = 'O';
        } else {
            pemain = 'X';
        }

        cetakPapan7(SIZE_7, papan);
    }

    if (cekPapan7(SIZE_7, papan) && !cekMenang7(n, papan, pemain)) {
        TeksTie();
        printf("Game berakhir seri.\n");
    }


}

void cetakPapan7(int n, char papan[SIZE_7][SIZE_7]) {
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


bool cekMenang7(int n, char papan[SIZE_7][SIZE_7], char pemain) {
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

bool cekPapan7(int n, char papan[SIZE_7][SIZE_7]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (papan[i][j] == '-') return false;
        }
    }
    return true;
}
