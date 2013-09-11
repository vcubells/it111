// t2c1e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <cstdio>

int _tmain(int argc, _TCHAR* argv[])
{
	int n1;
	int n2;

	printf("Entre el número 1: ");
	scanf("%d", &n1);

	printf("Entre el número 2: ");
	scanf("%d", &n2);

	printf("La suma de %d + %d = %d \n", n1, n2, n1+n2 );
	printf("La resta de %d - %d = %d \n", n1, n2, n1-n2 );
	printf("La multiplicación de %d * %d = %d \n", n1, n2, n1*n2 );
	printf("La división de %d / %d = %d \n", n1, n2, n1/n2 );
	
	return 0;
}

