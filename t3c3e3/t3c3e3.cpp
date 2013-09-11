//  main.cpp
//  t3c2e3
//
//  Created by Vicente Cubells Nonell on 18/09/12.
//  Copyright (c) 2012 Vicente Cubells Nonell. All rights reserved.
//
#include "stdafx.h"
#include <math.h>

void DosNumeros(int *, int *);
void UnNumero(int *);
float gtor(float);

int main(int argc, const char * argv[])
{
    int a, b;
	char opc;
    
	printf("Opciones:		\n \
		Suma (s/S)			\n \
		Resta (r/R)			\n \
		Multiplica (m/M/p/P) \n \
		Divide (d/D)		\n \
		Cuadrado (c/C)		\n \
		Cubo (u/U)			\n \
		Seno (e/E)			\n \
		Coseno (o/O)		\n \
		Tangente (t/T)		\n \
		Entre la opcion?: ");
	scanf("%c", &opc);

    switch (opc)
	{
	case 's':
	case 'S':
		DosNumeros(&a, &b);
		printf("%d + %d = %d \n", a, b, a+b);
		break;
	case 'r':
	case 'R':
		DosNumeros(&a, &b);
		printf("%d - %d = %d \n", a, b, a-b);
		break;
	case 'm':
	case 'M':
	case 'p':
	case 'P':
		DosNumeros(&a, &b);
		printf("%d * %d = %d \n", a, b, a*b);
		break;
	case 'd':
	case 'D':
		DosNumeros(&a, &b);
		printf("%d / %d = %d \n", a, b, a/b);
		break;
	case 'c':
	case 'C':
		UnNumero(&a);
		printf("%d ^ 2 = %d \n", a, a*a);
		break;
	case 'u':
	case 'U':
		UnNumero(&a);
		printf("%d ^ 3 = %d \n", a, a*a*a);
		break;
	case 'e':
	case 'E':
		UnNumero(&a);
		printf("sen(%d) = %.2f \n", a, sin(gtor(a)));
		break;
	case 'o':
	case 'O':
		UnNumero(&a);
		printf("cos(%d) = %.2f \n", a, cos(gtor(a)));
		break;
	case 't':
	case 'T':
		UnNumero(&a);
		printf("tan(%d) = %.2f \n", a, tan(gtor(a)));
		break;
	}
    
    return 0;
}


void DosNumeros(int * a, int * b)
{
	printf("Entre el valor de a: ");
	scanf("%d", a);
    
	printf("Entre el valor de b: ");
	scanf("%d", b);
}

void UnNumero(int * a)
{
	printf("Entre el valor de a: ");
	scanf("%d", a);
}

float gtor(float g)
{
	return (g * 3.14159 / 180);
}