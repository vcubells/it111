// t2c1e2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <cstdio>

int _tmain(int argc, _TCHAR* argv[])
{
	// f = ax3 + bx2 + cx + d

	int f, a, b, c, d, x;

	printf("Entre los valores de a b c d x: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);
	
	f = a * (x * x * x) + b * (x * x) + c * x + d;

	printf("El valor de f = %d \n", f);

	return 0;
}

