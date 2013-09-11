// t3c1e3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c;
	printf("Entre los numeros a,b,c :");
	scanf("%d,%d,%d", &a, &b, &c);

	if (a < b && a < c)
		printf("a es menor que b y c \n");
	else if (a > b && a < c)
		printf("a es mayor que b y menor que c \n");
	else 
		printf("a es mayor que b y c \n");

	return 0;
}

