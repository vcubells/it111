// t6c1e2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdlib.h>

void grafica(int n, int v);

int _tmain(int argc, _TCHAR* argv[])
{
	int numero, r;
	int v1, v2, v3, v4, v5;

	v1 = v2 = v3 = v4 = v5 = 0;

	printf("Entre el numero de veces: ");
	scanf("%d", &numero);

	for (int i = 0; i < numero; ++i)
	{
		r = rand() % 5 + 1;

		switch (r)
		{
			case 1: ++v1; break;
			case 2: ++v2; break;
			case 3: ++v3; break;
			case 4: ++v4; break;
			case 5: ++v5; break;
		}
	}
	
	/* Generar reporte tabular */
	grafica(1, v1);
	grafica(2, v2);
	grafica(3, v3);
	grafica(4, v4);
	grafica(5, v5);
	
	return 0;
}

void grafica(int n, int v)
{
	printf("%d\t%5d\t", n, v);
	for (int i = 0; i < v; ++i)
		printf("*");
	printf("\n");
}
