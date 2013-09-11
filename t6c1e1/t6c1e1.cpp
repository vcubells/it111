// t6c1e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

int fib(int n);
int factorial(int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int posicion;
	int f;

	printf("Entre la posición: ");
	scanf("%d", &posicion);

	for(int i = 1; i <= posicion; ++i)
	{
		f = fib(i);
		if (f % 2 != 0)
			f *= -1;
		printf("%3d\t%+05d\t%10d\n", i, f, factorial(i));
	}

	return 0;
}

int fib(int n)
{
	int n1, n2;
	int temp;

	n1 = n2 = 1;

	for( int i=3; i <= n; ++i)
	{
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}

	return n2;
}

int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; ++i)
		f *= i;

	return f;
}