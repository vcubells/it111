// t10c2e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stack>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	stack <int> pila;
	int opc;
	int caracter;

	do {
		printf("Entra un caracter: ");
		scanf("%d", &caracter);
		
		pila.push(caracter);

		printf("Quieres entrar otro caracter (1-Si / 0-No)?: ");
		scanf("%d", &opc);
	}
	while (opc != 0);
	
	/* Visualizar la entrada en orden inverso */

	while(!pila.empty())
	{
		printf("%d ", pila.top());
		pila.pop();
	}

	return 0;
}

