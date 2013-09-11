// t5c1e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

int actualiza_liebre(int);
int actualiza_tortuga(int);
void imprime_estado(int, int);

int _tmain(int argc, _TCHAR* argv[])
{
	int tick;
	int pos_liebre, pos_tortuga;

	srand(time(NULL));

	pos_liebre = pos_tortuga = 1;

	for (tick = 1; pos_liebre < 70 && pos_tortuga < 70; ++tick)
	{
		pos_liebre = actualiza_liebre(pos_liebre);
		pos_tortuga = actualiza_tortuga(pos_tortuga);
		imprime_estado(pos_liebre, pos_tortuga);
	}
	
	return 0;
}

int actualiza_liebre(int actual)
{
	int paso = rand() % 10 + 1;

	if (paso == 1 || paso == 2)
	{
		/* Duerme */
	}
	else if (paso == 3 || paso == 4)
	{
		actual += 9; /* Paso grande */
	}
	else if (paso == 5 )
	{
		actual -= 12; /* Deslizamiento grande */
		if (actual < 1) actual = 1;
	}
	else if (paso >=6 && paso <= 8)
	{
		actual += 1; /* Paso pequeño*/
	}
	else if (paso == 9 || paso == 10)
	{
		actual -= 2; /* Deslizamiento pequeño */
		if (actual < 1) actual = 1;
	}

	return actual;
}

int actualiza_tortuga(int actual)
{
	int paso = rand() % 10 + 1;

	switch (paso)
	{
		case 1: /* Paso rápido */
		case 2:
		case 3:
		case 4:
		case 5:
			actual += 3;
			break;

		case 6: /* Se cae */
		case 7:
			actual -= 6;
			if (actual < 1) actual = 1;
			break;

		case 8: /* Paso lento */
		case 9:
		case 10:
			actual += 1;
			break;
	}

	return actual;
}

void imprime_estado(int liebre, int tortuga)
{
	int i;

	for ( i = 1; i <= 70; ++i)
	{
		if (liebre == i && tortuga == i)
			printf("OUTCH");
		else if (liebre == i)
			printf("L");
		else if (tortuga == i)
			printf("T");
		else
			printf("-");
	}
	
	if (liebre >= 70)
		printf("Ganó la liebre Yupi!!!");
	else if (tortuga >= 70)
		printf("GANO LA TORTUGA !!!!! VIVA !!!!!!");

	printf("\n");

}