// t3c1e2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int numero;
	printf("Entra un número: ");
	scanf("%d", &numero);

	if (numero >= 0 && numero <= 10)
		printf("está entre 0..10 \n");
	else if (numero >= 11 && numero <= 20)
		printf("está entre 11..20 \n");
	else if (numero >= 21 && numero <= 30)
		printf("está entre 11..20 \n");
	else if (numero >= 31)
		printf("es mayor que 30 \n");

	return 0;
}

