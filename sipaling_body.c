 #include "sipaling_header.h"


// Penampil Header Program
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


// Visual jika player x menang (masih bingung manggilnya)
void TeksMenangX()
{
	printf("%*s\n",135,"   _____  _                        __   __  __  __                              ");
	printf("%*s\n",135,"  |  __ \| |                       \ \ / / |  \/  |                             ");
	printf("%*s\n",135,"  | |__) | | __ _ _   _  ___ _ __   \ V /  | \  / | ___ _ __   __ _ _ __   __ _ ");
	printf("%*s\n",135,"  |  ___/| |/ _` | | | |/ _ \ '__|   > <   | |\/| |/ _ \ '_ \ / _` | '_ \ / _` |");
	printf("%*s\n",135,"  | |    | | (_| | |_| |  __/ |     / . \  | |  | |  __/ | | | (_| | | | | (_| |");
	printf("%*s\n",135,"  |_|    |_|\__,_|\__, |\___|_|    /_/ \_\ |_|  |_|\___|_| |_|\__,_|_| |_|\__, |");
	printf("%*s\n",135,"                  __/ |                                                    __/ |");
	printf("%*s\n",135,"                 |___/                                                    |___/ ");
	printf("\n\n");
}

// Visual jika player 0 menang (masih bingung manggilnya)
void TeksMenangO()
{
	printf("%*s\n",150,"   _____  _                          ____    __  __                              ");
	printf("%*s\n",150,"  |  __ \| |                        / __ \  |  \/  |                             ");
	printf("%*s\n",150,"  | |__) | | __ _ _   _  ___ _ __  | |  | | | \  / | ___ _ __   __ _ _ __   __ _ ");
	printf("%*s\n",150,"  |  ___/| |/ _` | | | |/ _ \ '__| | |  | | | |\/| |/ _ \ '_ \ / _` | '_ \ / _` |");
	printf("%*s\n",150,"  | |    | | (_| | |_| |  __/ |    | |__| | | |  | |  __/ | | | (_| | | | | (_| |");
	printf("%*s\n",150,"  |_|    |_|\__,_|\__, |\___|_|     \____/  |_|  |_|\___|_| |_|\__,_|_| |_|\__, |");
	printf("%*s\n",150,"                   __/ |                                                    __/ |");
	printf("%^s\n",150,"                  |___/                                                    |___/ ");
	printf("\n\n");
}

// Visual jika Draw (Masih Bingung Manggilnya)
void TeksTie()
{
	printf("%*s\n",150,"  _______ _____ ______ ");
	printf("%*s\n",150," |__   __|_   _|  ____|");
	printf("%*s\n",150,"    | |    | | | |__   ");
	printf("%*s\n",150,"    | |    | | |  __|  ");
	printf("%*s\n",150,"    | |   _| |_| |____ ");
	printf("%*s\n",150,"    |_|  |_____|______|");
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
	system("cls");
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
	printf("\033[34m%s (O)\033[0m|\n", NamaPemain2);
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
			permainan3x3();
			retryMenu();

            break;
        case 2:
        	system("cls");
            printf("LIMA KALI LIMA\n");
            permainan5x5();
            retryMenu();
            
            break;
        case 3:
        	system("cls");
            printf("TUJUH KALI TUJUH\n");
            permainan7x7();
            retryMenu();
            
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

// Delay buat timer 
void delay(int ms)
{
	clock_t timeDelay = ms + clock();
	while (timeDelay > clock() );
}

// Algoritma Timer (masih bingung biar jalan berbarengan dengan permainan)
void timer()
{
	int second = 11;
	int waktu = 0;
	while(waktu == 0)
	{
		if(second <= 11 && second >= 1)
		{
			delay(1000);
			second--;
		}
		printf("\r%*s", 89, " ");
		printf("%d Detik",second);
		if(second == 0)
		{
			break;
		}
	}
}

// Menu pilihan start again atau exit saat setelah game selesai
void retryMenu() {
    int tombol2 = 1;
	
    while (1) {
        displayRetry(tombol2);

        char key = getch(); 

        if (key == 's' && tombol2 < 2) {
            tombol2++;
        } else if (key == 'w' && tombol2 > 1) {
            tombol2--;
        } else if (key == 13) { 
            switch (tombol2) {
                case 1:
                    PilihBoard();
                    break;
                case 2:
                    KeluarAwal();
                    exit(0);
                    break;
                default:
                    break;
            }
        }
    }
}

// Visualisasi MenuRetry
void displayRetry(int tombol2) {
    system("cls"); // Clear the console screen (Windows-specific)
    TeksHeader();
    TeksMenangX();
    printf("%*s\n\n",113,"\033[4mRetry Menu\033[0m");
    printf("%*s",104, (tombol2 == 1) ? "\033[34m> \033[0m" : "");
    printf("Play Again %s\n\n", (tombol2 == 1) ? "\033[34m<\033[0m" : "");
    printf("%*s",104, (tombol2 == 2) ? "\033[34m> \033[0m" : "");
    printf("Exit %s\n\n", (tombol2 == 2) ? "\033[34m<\033[0m" : "");
}
