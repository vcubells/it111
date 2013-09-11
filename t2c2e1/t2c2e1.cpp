// t2c2e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <math.h>

float area(float );

int _tmain(int argc, _TCHAR* argv[])
{
	float radio;
	float res;

	printf("Entre el radio: ");
	scanf("%f", &radio);

	res = area(radio);

	printf("El area es %f", res);
	
	return 0;
}

float area(float  r)
{
	float pi = 3.14159;
	return   pi * pow(r, 2);
}
