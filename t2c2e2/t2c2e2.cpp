// t2c2e2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	float numero;

	printf("Entre un número: ");
	scanf("%f", &numero);

	printf("El cuadrado de %f = %f \n", numero, pow(numero, 2));
	printf(" e elevado a %f = %f \n", numero, exp(numero));
	printf(" La raiz cuadrada de %f = %f \n", numero, sqrt(numero));


	return 0;
}

