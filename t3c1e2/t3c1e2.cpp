// t3c1e2.cpp: define el punto de entrada de la aplicaci�n de consola.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int numero;
	printf("Entra un n�mero: ");
	scanf("%d", &numero);

	if (numero >= 0 && numero <= 10)
		printf("est� entre 0..10 \n");
	else if (numero >= 11 && numero <= 20)
		printf("est� entre 11..20 \n");
	else if (numero >= 21 && numero <= 30)
		printf("est� entre 11..20 \n");
	else if (numero >= 31)
		printf("es mayor que 30 \n");

	return 0;
}

