// t10c1e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    vector<int> numeros;
    
    int opc;
    int num;
    int confirmacion = 0;
    
    do {
        
        printf("Menu de opciones: \n \
               1- Insertar al inicio \n\
               2- Insertar al final \n\
               3- Borrar al inicio \n\
               4- Borrar al final \n\
               5- Obtener el primer elemento \n\
               6- Obtener el último elemento \n\
               7- Tamaño del vector \n\
               8- Mostrar el vector \n\
               9- Eliminar todo \n\
               0- Salir \n\
               Selecciona tu opción: ");
        
        scanf("%d", &opc);
        
        switch (opc) {
            case 0:
                break;
                
            case 1:
                /* Insertar al inicio */
                
                printf("Entre un número: ");
                scanf("%d", &num);
                
                numeros.insert(numeros.begin(), num);
                break;
            
            case 2:
                /* Insertar al inicio */
                
                printf("Entre un número: ");
                scanf("%d", &num);
                
                numeros.push_back(num);
                break;
                
            case 3:
                /* Borrar al inicio */
                break;
                
            case 4:
                /* Borrar al final */
                numeros.pop_back();
                break;
                
            case 5:
                printf("El primer elemento es %d \n", numeros.front());
                break;
                
            case 6:
                printf("El primer elemento es %d \n", numeros.back());
                break;
                
            case 7:
                printf("El tamaño del vector es %ld\n", numeros.size());
                break;
                
            case 8:
                /* Mostrar todos los elementos del vector */
                for (int i = 0; i < numeros.size(); ++i) {
                    printf("%d \n", numeros[i]);
                }
                
                break;
                
            case 9:
                /* Borrar toto el vector */
                printf("¿Está seguro que quiere borrar todo (0-No / 1-Si)?: ");
                scanf("%d", &confirmacion);
                
                if (confirmacion == 1) {
                    numeros.clear();
                }
                
                break;
            
            default:
                printf("Opción no válida\n");
                break;
        }
    }
    while (opc != 0);

    
	return 0;
}


