// t3c1e1.cpp: define el punto de entrada de la aplicaci�n de consola.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char letra;
	printf("Oprime una tecla: ");
	scanf("%c", &letra);

	// Soluci�n con IF..ELSE
	if (letra == 'a')
		printf("Oprimiste la a \n ");
	else if (letra == 'b')
		printf("Oprimiste la b \n");
	else if (letra == 'c')
		printf("Oprimiste la c \n");
	else
		printf("Oprimiste otra letra \n");

	// Soluci�n con switch
	printf("Aqu� comienza el switch.... \n");
	switch (letra)
	{
		case 'a':
			printf("Oprimiste la a \n ");
			break;
		case 'b':
			printf("Oprimiste la b \n");
			break;
		case 'c':
			printf("Oprimiste la c \n");
			break;
		default:
			printf("Oprimiste otra letra \n");
	}

	return 0;
}

