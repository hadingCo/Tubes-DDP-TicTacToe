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
                    //Komputer();
					a =1;
                }
                break;
        }
	}
}

void KeluarAwal()
{
	printf("%*s\n",125,"  __                         __                       ");
	printf("%*s\n",125," /__)  _      _  _  _  _    / _)  _  _  _  /  /  '  _ ");
	printf("%*s\n",125,"/     /  ()  (/ /  (/ //)  /(_)  (- /  (/ /( /) /  /  ");
	printf("%*s\n",125,"            _/                                        ");
	printf("\n\n\n");
    exit(1);
	
}

void MasukkanPemain()
{	
	printf("%*s\n\n",115 ,"\033[4mMasukkan Nama Pemain\033[0m");
	printf("%*s",100,"\033[31mPlayer 1\033[0m -> ");
	scanf("%[^\n]%*c", NamaPemain1);
	printf("%*s",100,"\033[34mPlayer 2\033[0m -> ");
	scanf("%[^\n]%*c", NamaPemain2);
}

void DisplayNama()
{
	system("cls");
	TeksHeader();
	printf("%*s",50, "|");
	printf("\033[31m%s (X)\033[0m|", NamaPemain1);
	printf("%*s",40, "|");
	printf("\033[34m%s (O)\033[0m|", NamaPemain2);
}

int CekKosong()
{

}

void Permainan()
{
	
}
<<<<<<< HEAD


void ResetPapan()
{

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			Papan[i][j] = ' ';
		}
	}
}


void CetakPapan()
{
	printf("\n\n");
    printf("%*s",89,"");
	printf("| %c | %c | %c |\n", Papan[0][0], Papan[0][1], Papan[0][2]);
	printf("%*s",103,"|---|---|---|\n");
    printf("%*s",89,"");
	printf("| %c | %c | %c |\n", Papan[1][0], Papan[1][1], Papan[1][2]);
	printf("%*s",103,"|---|---|---|\n");
    printf("%*s",89,"");
	printf("| %c | %c | %c |\n", Papan[2][0], Papan[2][1], Papan[2][2]);
	printf("\n");
	
}


void PergerakanPemain()
{

}


void PergerakanKomputer()
{

}


void CekMenang()
{

}


void CetakMenang()
{

}
=======
>>>>>>> edf3c7e7ea0acfd5525686d3a67a3b2e0ebb6603
