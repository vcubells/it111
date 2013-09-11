//  main.cpp
//  t3c2e3
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
    
    printf("El mayor entre %d y %d es %d \n", a, b, Mayor(a,b));
    printf("El menor entre %d y %d es %d \n", a, b, Menor(a,b));
    
    Igual(a, b) == 1 ? printf("Son iguales") : printf("Son diferentes");
    
    return 0;
}

int Mayor(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int Menor(int a, int b)
{
    return ((a < b) ?  a :  b);
}

int Igual(int a, int b)
{
    return (a == b);
}





