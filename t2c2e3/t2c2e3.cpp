// t2c2e3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <math.h>


int _tmain(int argc, _TCHAR* argv[])
{
	float numero;
	float res;

	printf("Entra el numero: ");
	scanf("%f", &numero);

	res = pow(numero,10);

	printf("%f elevado a la 10 = %f \n", numero, res );



	return 0;
}

