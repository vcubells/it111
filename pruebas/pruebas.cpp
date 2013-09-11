// pruebas.cpp: define el punto de entrada de la aplicación de consola.
//


// tarea5.cpp: define el punto de entrada de la aplicaciÛn de consola.

//

#include "stdafx.h"

#include <stdio.h>

#include <conio.h>

#include<iostream>

#include <windows.h>

#include<math.h>

#include <dos.h>

void gotoxy(int x, int y) { 

COORD coord; 

coord.X = x; 

coord.Y = y; 

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 

} 

void inv(int x);

void nor(int x);

void ext(int x);

int _tmain(int argc, _TCHAR* argv[])

{

	int x,opcion=0;

	system("color 0c");

	printf("selecione una opcion \n \rnormal(1)\n \rinvertido(2)\n\	   \respiral(3) \n");

	scanf("%d",&opcion);

	switch(opcion){

case 1: 

printf("\nEscribe el numero que deces en un rango del 1 al 9 \n");

scanf("%d", &x); nor(x); break;

case 2:  

printf("\nEscribe el numero que deces en un rango del 1 al 9 \n");

scanf("%d", &x); inv(x); break;

case 3:	 

printf("\nEscribe el numero que deces en un rango del 1 al 9 \n");

scanf("%d", &x); ext(x); break;

	}

gotoxy(1,20); system("PAUSE");

	return 0;

}

void nor(int x){

	system("cls"); 

int  z=0, s=3, a=3,cont=0,b=0;

b=pow((double)x,2);

for(z=1;z<=b;z++){

	gotoxy(s,a);printf("%d",z);

	cont++;

	s+=4;

	if(cont==x){ cont=0; a++; s=3; }

} }



void inv(int x){

	system("cls"); 

int z=0, s=3, a=3,cont=0,b=0;

b=pow((double)x,2);

for(z=1;z<=b;b--){

	gotoxy(s,a);printf("%d",b);

	cont++;

	s+=4;

	if(cont==x){ cont=0;a++; s=3;}

}}



void ext(int x){

	system("cls"); 

int z=0,s=3,a=3,limite=0,c=x+1,d,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,t=0,w=0;

limite=pow((double)x,2);



for(z=1;z<=limite;z++){



if(z<=x){s+=4; 

gotoxy(s,a);printf("%d",z);

}



if(z==c){e=z;

for(d=1;d<x;d++){a=a+2;

gotoxy(s,a);printf("%d",e);

e++;} f=e; }



if(f==z){ e-=1;

	for (int f2=1; f2<x;f2++ ){ s=s-4; e++;

	gotoxy(s,a);printf("%d",e); } g=e; }



if(g==z){

	for (int g2=1; g2<x-1;g2++ ){ a=a-2; e++;

	gotoxy(s,a);printf("%d",e); } h=e; }



if(h==z){

	for (int h2=1; h2<x-1;h2++ ){ s=s+4; e++;

	gotoxy(s,a);printf("%d",e); } i=e; }



if(i==z){

	for (int i2=1; i2<x-2;i2++ ){ a=a+2; e++;

	gotoxy(s,a);printf("%d",e); } j=e; }

if(j==z){

	for (int j2=1; j2<x-2;j2++ ){ s=s-4; e++;

	gotoxy(s,a);printf("%d",e); } k=e; }



if(k==z){

	for (int i2=1; i2<x-3;i2++ ){ a=a-2; e++;

	gotoxy(s,a);printf("%d",e); } l=e; }



if(l==z){

	for (int h2=1; h2<x-3;h2++ ){ s=s+4; e++;

	gotoxy(s,a);printf("%d",e); } m=e; }



if(m==z){

	for (int h2=1; h2<x-4;h2++ ){ a=a+2; e++;

	gotoxy(s,a);printf("%d",e); } n=e; }



if(n==z){

	for (int h2=1; h2<x-4;h2++ ){ s=s-4; e++;

	gotoxy(s,a);printf("%d",e); } o=e; }



if(o==z){

	for (int h2=1; h2<x-5;h2++ ){ a=a-2; e++;

	gotoxy(s,a);printf("%d",e); } p=e; }



if(p==z){

	for (int h2=1; h2<x-5;h2++ ){ s=s+4; e++;

	gotoxy(s,a);printf("%d",e); } q=e; }



if(q==z){

	for (int h2=1; h2<x-6;h2++ ){ a=a+2; e++;

	gotoxy(s,a);printf("%d",e); } r=e; }



if(r==z){

	for (int h2=1; h2<x-6;h2++ ){ s=s-4; e++;

	gotoxy(s,a);printf("%d",e); } t=e; }



if(t==z){

	for (int h2=1; h2<x-7;h2++ ){ a=a-2; e++;

	gotoxy(s,a);printf("%d",e); } w=e; }



if(w==z){

	for (int h2=1; h2<x-7;h2++ ){ s=s+4; e++;

	gotoxy(s,a);printf("%d",e); }  }



}

}

