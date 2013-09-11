//
//  main.cpp
//  t3c2e1
//
//  Created by Vicente Cubells Nonell on 18/09/12.
//  Copyright (c) 2012 Vicente Cubells Nonell. All rights reserved.
//
#include "stdafx.h"

int main(int argc, const char * argv[])
{

    char nombre[20];
    int edad;
    
    printf("Entre el nombre: ");
    scanf("%s", nombre);
    
    printf("Entre la edad: ");
    scanf("%d", &edad);
    
    if (edad < 1)
        printf("Usuario %s usted es un bebé", nombre);
    else if (edad >=1 && edad < 14)
        printf("Usuario %s usted es un niño", nombre);
    else if (edad >=14 && edad < 20)
        printf("Usuario %s usted es un adolescente", nombre);
    else if (edad >=20 && edad < 30)
        printf("Usuario %s usted es un joven", nombre);
    else if (edad >=30 && edad < 60)
        printf("Usuario %s usted es un adulto", nombre);
    else if (edad >= 60)
        printf("Usuario %s usted es un adulto mayor", nombre);
    else
        printf("Edad no válida");
    
    return 0;
}



