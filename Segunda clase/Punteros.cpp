//Puntero es una variable que se va a almacenar la direccion de memoria donde se esta almacenando otra variable.
//&==>Significa la direccion de memoria donde se esta guardando la variable.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int x,*datos;
	x=10;
	datos = &x;
	
	cout<<"Numero: "<<*datos<<endl;
	cout<<"Puntero Almacenamiento: "<<datos<<endl;
	
	
	getch();
	return 0;
}

