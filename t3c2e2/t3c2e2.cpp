//  main.cpp
//  t3c2e2
//
//  Created by Vicente Cubells Nonell on 18/09/12.
//  Copyright (c) 2012 Vicente Cubells Nonell. All rights reserved.
//
#include "stdafx.h"

int main(int argc, const char * argv[])
{

    int a, b;
    
    printf("Entre el valor de a: ");
    scanf("%d", &a);
    
    printf("Entre el valor de b: ");
    scanf("%d", &b);
    
    if (a < b)
    {
        printf("El resultado de multiplicar b, a veces * 2 = %d \n", b << a);
    }
    else
    {
        printf("El resultado de dividir a, b veces / 2 = %d \n", a >> b);
    }
    
    return 0;
}


