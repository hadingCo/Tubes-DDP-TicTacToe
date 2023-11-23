#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "sipaling_header.h"

void MenuAwal(){		
	TeksHeader();
	printf("%*s\n",30," Start ");
	printf("\n\n");
	printf("%*s\n",30," Exit ");
	do 
	{
		key = getch();
		switch (key)
		{
			case 'w':
			system("cls");
			TeksHeader();
			printf("%*s\n",35,"> Start <");
			printf("\n");
			printf("%*s\n",30," Exit ");
			break;

			case 's':
			system("cls");
			TeksHeader();
			printf("%*s\n",30," Start ");
			printf("\n");
			printf("%*s\n",35,"> Exit <");
			break;
		}
	} while (key == 'w' || key == 's');
		MenuGame();
	

}

	void TeksHeader(){
		printf("%*s\n",30," _____________________________________________________________________________________________________   ");
		printf("%*s\n",30," ||                                     Created By HadingCO                                          ||  ");
		printf("%*s\n",30," ||            _____   ___    ____     _____      _       ____     _____    ___    _____             ||  ");
		printf("%*s\n",30," ||           |_   _| |_ _|  / ___|   |_   _|    | |     / ___|   |_   _|  | _ |  | ____|            ||  ");
		printf("%*s\n",30," ||   _____     | |    | |  | |         | |     | _ |   | |         | |   | | | | |  _|      _____   ||  ");
		printf("%*s\n",30," ||  |_____|    | |    | |  | |___      | |    | ___ |  | |___      | |   | |_| | | |___    |_____|  ||  ");
		printf("%*s\n",30," ||             |_|   |___|  |____|     |_|   |_|   |_|  |____|     |_|    |___|  |_____|            ||  ");
		printf("%*s\n",30," ||                                                                                                  ||  ");
		printf("%*s\n",30," ||__________________________________________________________________________________________________||  ");
		printf("\n\n\n");
	}

	
void MenuGame(){
	if (key =='1``'){
		system("cls");
		TeksHeader();
		printf("%*s\n",35,"> (1) Player 1 Vs Player 2 <");
		printf("\n");
		printf("%*s\n",30," Player Vs Komputer ");
		do 
	{
		key = getch();
		switch (key)
		{
			case 'w':
			system("cls");
			TeksHeader();
			printf("%*s\n",35,"> (1) Player Vs Player <");
			printf("\n");
			printf("%*s\n",30," Player Vs Komputer ");
			break;

			case 's':
			system("cls");
			TeksHeader();
			printf("%*s\n",30," Player Vs Player");
			printf("\n");
			printf("%*s\n",35,"> (2) Player Vs Komputer <");
			break;
		}
	} while (key == 'w' || key == 's');
		
		if (key=='w'){
			system("cls");
			MasukkanPemain();
			void Papan();

		} else if (key=='2'){
			system("cls");
			printf("%*s\n\n",1,"hihih");
		}
		
	} else if (key=='s' && i=='\n'){
		system("cls");
		TeksHeader();
		printf("%*s\n",30,"DADAH");	
	}
}

void MasukkanPemain(){
	printf("%*s\n\n",28 ,"MASUKKAN NAMA PEMAIN");
	printf("%*s",20,"Player 1 -> ");
	fgets(NamaPemain1,50, stdin);
	printf("%*s",20,"Player 2 -> ");
	fgets(NamaPemain2,50, stdin);
}

void Papan (){
	
}
