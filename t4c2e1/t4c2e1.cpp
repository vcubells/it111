// t4c2e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int aprobados, reprobados, contador, estado; /* Definir variables contadoras */
    
    aprobados = 0;  /* Inicializar los contadores */
    reprobados = 0;
    contador = 0;
    
    do
    {
        printf("Entre el estado del estudiante #%d (1-Aprob / 2-Reprob / 0-Salir): ", contador + 1);
        scanf("%d", &estado);
        
        /* Comparar el valor de estado para acumular en la variable correspondiente */
        if (estado == 1)
        {
            aprobados++;
            ++contador; /* Incrementar el contador del número de estudiantes */
        }
        else if (estado == 2)
        {
            reprobados++;
            ++contador; /* Incrementar el contador del número de estudiantes */
        }
        else
        {
            printf("Estado no válido \n");
        }
    }
	while (estado != 0); /* fin del do while */
    
    /* Imprimir resultados */
    printf("El número de aprobados es %d \n", aprobados);
    printf("El número de reprobados es %d \n", reprobados);
    
    if ( (contador * .8) <= aprobados )
    {
        printf("Se cumplió el objetivo");
    }
    
    return 0;
}

