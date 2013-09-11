// t10c2e2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stack>
#include <queue>

#define MAXAUTOS 5
#define MAXESPERA 5


using namespace std;

typedef struct {
    int placa;
} coche;

int _tmain(int argc, _TCHAR* argv[])
{
	stack <coche> estacionamiento, calle;
    queue <coche> en_espera;
    
	int opc;
	int placa;
    
	do {
		
        printf("Menu de opciones \n \
               1- Llega un coche \n \
               2- Sale un coche \n \
               3- Salir \n \
               Entra tu opción: ");
        scanf("%d", &opc);
        
        switch (opc) {
            case 1: /* Llega un coche */
                printf("Entra el número de placas (Solo números): ");
                scanf("%d", &placa);
                
                /* Crear estructura */
                coche nuevo;
                nuevo.placa = placa;
                
                /* Verificar si hay lugar en el estacionamiento */
                if (estacionamiento.size() < MAXAUTOS)
                    estacionamiento.push(nuevo);
                /* No hay lugar en el estacionamiento, verificar la cola de espera */
                else if (en_espera.size() < MAXESPERA)
                {
                    en_espera.push(nuevo);
                }
                /* No hay lugar tampoco enla cola de espera, vete a otro estacionamiento */
                else {
                    printf("Coche %d vete a otro estacionamiento, ya no hay lugar \n", placa);
                }
                break;
            case 2: /* Sale un coche */
                
                printf("Dame las placas del coche a sacar: ");
                scanf("%d", &placa);
                
                /* Buscar el coche que se va */
                while (!estacionamiento.empty() && estacionamiento.top().placa != placa) {
                    calle.push(estacionamiento.top());
                    estacionamiento.pop();
                }
                /* No estaba el coche en el estacionamiento */
                if (estacionamiento.empty()) {
                    printf("El coche con placas %d no estaba en el estacionamiento \n", placa);
                    
                    /* Regresar los coches de la calle al estacionamiento */
                    while (!calle.empty()) {
                        estacionamiento.push(calle.top());
                        calle.pop();
                    }
                }
                /* Si estaba el coche en elñ estacionamiento */
                else {
                    /* Retirar el coche que se va */
                    printf("El coche con placas %d ya se va \n", placa);
                    estacionamiento.pop();
                    
                    /* Regresar los coches de la calle al estacionamiento */
                    while (!calle.empty()) {
                        estacionamiento.push(calle.top());
                        calle.pop();
                    }
                    
                    /* Mover el primer coche de la fila al estacionamiento */
                    if (!en_espera.empty()) {
                        estacionamiento.push(en_espera.front());
                        en_espera.pop();
                    }
                }
                
                break;
            case 3: /* Salir */
                printf("Gracias por utilizar nuestro estacionamiento \n");
                break;
            default:
                printf("Opción no válida \n");
                break;
        }
	}
	while (opc != 3);
	

	return 0;
}

