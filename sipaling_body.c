#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "sipaling_header.h"

void MenuAwal(){		
	printf("%*s\n\n",18,"MENU");
	printf("%*s\n",30,"   __  _  __      ____    _                    _   ");
	printf("%*s\n",30,"  / / / | | |    / ___|  | |_    __ _   _ __  | |_ ");
	printf("%*s\n",30," | |  | |  | |   |___ |  | __|  / _` | | '__| | __|");
	printf("%*s\n",30," | |  | |  | |    ___) | | |_  | (_| | | |    | |_ ");
	printf("%*s\n",30," | |  |_|  | |   |____/   |__|  |__,_| |_|     |__|");
	printf("%*s\n",19,"  |_|     /_/       								  ");
	printf("\n\n");
	printf("%*s\n",21,"  	  _____          _   _   			   ");
	printf("%*s\n",21,"  	 | ____| __  __ (_) | |_               ");
	printf("%*s\n",21," 	 |  _|   | || / | | | __|              ");
	printf("%*s\n",21," 	 | |___   >  <  | | | |_               ");
	printf("%*s\n",21,"  	 |_____| |_||_| |_|  |__|              ");

	
	do 
	{                                                                              
            key = getch();  // Baca kode panah yang sebenarnya
            switch (key) 
	    {
                case 'w':
				system("cls");
                printf("%*s\n",30,"   __  _  __      ____    _                    _   ");
				printf("%*s\n",30,"  / / / | | |    / ___|  | |_    __ _   _ __  | |_ ");
				printf("%*s\n",30," | |  | |  | |   |___ |  | __|  / _` | | '__| | __|");
				printf("%*s\n",30," | |  | |  | |    ___) | | |_  | (_| | | |    | |_ ");
				printf("%*s\n",30," | |  |_|  | |   |____/   |__|  |__,_| |_|     |__|");
				printf("%*s\n",19,"  |_|     /_/       ");
				printf("\n\n");
				printf("%*s\n",21,"  	  _____          _   _   			   ");
				printf("%*s\n",21,"  	 | ____| __  __ (_) | |_               ");
				printf("%*s\n",21," 	 |  _|   | || | | | | __|              ");
				printf("%*s\n",21," 	 | |___   >  <  | | | |_               ");
				printf("%*s\n",21,"  	 |_____| |_||_| |_|  |__|              ");
				break;

                case 's':
				system("cls");
					printf("%*s\n",30,"  ____    _                    _            ");
					printf("%*s\n",30," / ___|  | |_    __ _   _ __  | |_          ");
					printf("%*s\n",30," |___|   | __|  / _` | | '__| | __| 		   ");
					printf("%*s\n",30,"  ___) | | |_  | (_| | | |    | |_  		   ");
					printf("%*s\n",30," |____/   |__|  |__,_| |_|     |__|         ");
					printf("\n\n");
					printf("%*s\n",21,"   __  ____   __      _____          _   _   ");
					printf("%*s\n",21,"  / / |___ |  | |    | ____| __  __ (_) | |_ ");
					printf("%*s\n",21," | |    __) |  | |   |  _|   | || | | | | __|");
					printf("%*s\n",21," | |   / __/   | |   | |___   >  <  | | | |_ ");
					printf("%*s\n",21," | |  |_____|  | |   |_____| |_||_| |_|  |__|");
					printf("%*s\n",10,"  |_|         /_/ 							");

				break;  
	    }      
		
	} while (key == 'w' || key == 's');
		

	MenuGame();

	// printf("%*s\n",20,"(2)Exit");
	// key = getch();
}

	
void MenuGame(){
	if (key=='1'){
		system("cls");
		printf("%*s\n\n",27,"MODE PERMAINAN");
		printf("%*s\n",31,"(1)Player 1 vs Player 2");
		printf("%*s\n",31,"(2)Player 1 vs Komputer");
	
		key = getch();
		
		if (key=='1'){
			system("cls");
			MasukkanPemain();
			void Papan();

		} else if (key=='2'){
			system("cls");
			printf("%*s\n\n",1,"hihih");
		}
		
	} else if (key=='2'){
		system("cls");
		printf("%*s\n",18,"DADAH");	
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