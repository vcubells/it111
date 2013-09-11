// t4c1e3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

int fact(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int numero;

	printf("Entre un numero: ");
	scanf("%d", &numero);

	printf("El factorial de %d = %d \n", numero, fact(numero));

	return 0;
}

int fact(int n)
{
	int factorial = 1;
	int i;
	
	for(i=2; i <= n; ++i)
	{
		factorial *= i;
	}

	return factorial;
}
