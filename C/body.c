#include <stdio.h>
#include <conio.h>
#include "header.h"

void MenuAwal(){
	char key;
	
	printf("%*s\n\n",18,"MENU");
	printf("%*s\n",21,"(1)Start");
	printf("%*s\n",20,"(2)Exit");
	
	key = getch();
	
	if (key=='1'){
		system("cls");
		printf("%*s\n\n",27,"MODE PERMAINAN");
		printf("%*s\n",31,"(1)Player 1 vs Player 2");
		printf("%*s\n",31,"(2)Player 1 vs Komputer");
		
	} else if (key=='2'){
		system("cls");
		printf("%*s\n",18,"DADAH");	
	}

	
	
	
}
