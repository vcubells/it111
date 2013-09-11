// t4c1e2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int suma = 0;
	int numero_calif = 0;
	int calificacion;

	do {
		printf("Entre la calificacion %d: ", numero_calif+1);
		scanf("%d", &calificacion);

		if (calificacion != -1)
		{
			suma += calificacion;
			++numero_calif;
		}
	}
	while (calificacion != -1);

	printf("El promedio es = %d \n", suma / numero_calif);
	return 0;
}

