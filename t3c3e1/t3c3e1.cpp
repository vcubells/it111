// t3c3e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"


/* Prototipos */
int Mayor(int, int);
int Menor(int, int);
int Igual(int, int);

int main(int argc, const char * argv[])
{
    int a, b;
    int opc;

    printf("Entre el valor de a: ");
    scanf("%d", &a);
    
    printf("Entre el valor de b: ");
    scanf("%d", &b);
    
	printf("Menú de opciones \n \
		1-Mayor \n \
		2-Menor \n \
		3-Iguales \n");
	printf("Selecciona una opción?: ");
	scanf("%d", &opc);

	switch (opc)
	{
		case 1:
			printf("El mayor entre %d y %d es %d \n", a, b, Mayor(a,b));
			break;
		case 2:
			printf("El menor entre %d y %d es %d \n", a, b, Menor(a,b));
			break;
		case 3:
			Igual(a, b) == 1 ? printf("Son iguales") : printf("Son diferentes");
			break;
		default:
			printf("Opción no válida \n");
	}
    
    return 0;
}

int Mayor(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int Menor(int a, int b)
{
    return ((a < b) ?  a :  b);
}

int Igual(int a, int b)
{
    return (a == b);
}





