// t9c2e1.cpp: define el punto de entrada de la aplicación de consola.
//

#include <stdio.h>

#define MAX 100

typedef struct {
	char nombre[30];
	char apellidos[30];
	int edad;
} persona;

void entraPersona(persona registro[MAX], int * total);
void almacenaArchivo(persona registro[MAX], int total);
void leerArchivo(persona registro[MAX], int * total);
void mostrarPersonas(persona registro[MAX], int total);

int main(int argc, char* argv[])
{
	int opc;
	int total = 0;
    
	persona registro[MAX];
    
	do {
		printf("Menú de opciones\n \
               1-Entrar una persona\n \
               2-Guardar en archivo\n \
               3-Leer el archivo\n \
               4-Mostrar personas\n \
               0-Salir\n \
               Entre su opción: ");
		scanf("%d", &opc);
        
		switch (opc)
		{
			case 0:
				break;
			case 1:
				entraPersona(registro, &total);
				break;
			case 2:
				almacenaArchivo(registro, total);
				break;
			case 3:
				leerArchivo(registro, &total);
				break;
            case 4:
                mostrarPersonas(registro, total);
                break;
			default:
				printf("Opción no válida\n");
		}
	}
	while (opc != 0);
    
	return 0;
}

void entraPersona(persona registro[MAX], int * total)
{
	int opc;
	do {
		if (*total < MAX)
		{
			printf("Entra el nombre: ");
			scanf("%s", registro[*total].nombre);
            
			printf("Entra el apellido: ");
			scanf("%s", registro[*total].apellidos);
            
			printf("Entra la edad: ");
			scanf("%d", &registro[*total].edad);
            
			(*total)++;
		}
		else {
			printf("Ya entró el número máximo de personas\n");
		}
        
		printf("Desea entrar los datos de otra persona (0-No / 1-Si): ");
		scanf("%d", &opc);
	}
	while (opc != 0);
}

void almacenaArchivo(persona registro[MAX], int total)
{
	int i;
    FILE * file;
	file = fopen("/Users/vcubells/personas.dat", "wb");
    
	if (file == NULL)
	{
		printf("Error al abrir el archivo\n");
	}
	else {
		for( i = 0; i < total; ++i)
		{
			fwrite(&registro[i], sizeof(persona), 1, file);
		}
        
		fclose(file);
	}
}

void leerArchivo(persona registro[MAX], int * total)
{
	int i = 0;
    
	FILE * file;
	file = fopen("/Users/vcubells/personas.dat", "rb");
    
	if (file == NULL)
	{
		printf("Error al abrir el archivo\n");
	}
	else {
		while (! feof(file) )
		{
			fread(&registro[i], sizeof(persona), 1, file);
			i++;
		}
        
		fclose(file);
	}
    
	*total = i;
}

void mostrarPersonas(persona registro[MAX], int total)
{
    int i;
    for ( i = 0; i < total; ++i)
    {
        printf("%30s\t%30s\t%3d\n",
               registro[i].nombre,
               registro[i].apellidos,
               registro[i].edad);
    }
    
    printf("Total de personas = %d\n", total);
}