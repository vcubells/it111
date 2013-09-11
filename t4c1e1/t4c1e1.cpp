// t4c1e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#define N 5

int _tmain(int argc, _TCHAR* argv[])
{
	int suma = 0;
	int contador = 1;
	int calificacion;

	while (contador <= N)
	{
		printf("Entra la calificacion %d: ", contador);
		scanf("%d", &calificacion);

		suma += calificacion; // es igual a suma = suma + calificacion

		++contador;
	}
	
	printf("El promedio es = %d \n", suma/N);

	return 0;
}

