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
    printf("\n\n");
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
            permainan5x5();
            break;
        case 3:
        	system("cls");
            printf("TUJUH KALI TUJUH\n");
            permainan7x7();
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

