#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "sipaling_body.c"

int main (){
	TeksHeader();
	MenuAwal();
	DisplayNama();

	char pemenang = ' ';
	ResetPapan();
	CetakPapan();


	return 0;
}

	
