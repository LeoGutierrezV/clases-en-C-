//vector[0]  7
//vector[1]  8
//vector[2]  9
//vector[3]  10

/*#include<iostream>
using namespace std;

int main(){
	/*int vector[5]={1,2,3,4,5};
	
	cout<<"El valor de la posicion 0 es "<<vector[0]<<endl;
	cout<<"El valor de la posicion 1 es "<<vector[1]<<endl;
	cout<<"El valor de la posicion 2 es "<<vector[2]<<endl;
	cout<<"El valor de la posicion 3 es "<<vector[3]<<endl;
	cout<<"El valor de la posicion 4 es "<<vector[4]<<endl;*/
	
	/*char palabra[8];
	
	palabra[0]='A';
	palabra[1]='P';
	palabra[2]='R';
	palabra[3]='E';
	palabra[4]='N';
	palabra[5]='D';
	palabra[6]='E';
	palabra[7]='R';
	
	cout<<("La palabra es: ")<<palabra<<endl;
	for(int i=0; i<8;i++){
		cout<<palabra[i];
	}*/
	//Recorrer y Mostrar con WHILE
	/*int vector[5]={1,2,3,4,5};
	int i=0;
	while(i < 5){
		cout<<"El valor de la posicion "<<vector[i]<<endl;
		i++;
	}
	
	
	
	
	
	
	return 0;
}*/
//Realizar una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos
//
/*#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
int calcularSuma(int vec[],int);

int vec[100],tam;

int main(){
	pedirDatos();
	
	cout<<"\nLa suma es: "<<calcularSuma(vec,tam)<<endl;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

int calcularSuma(int vec[],int tam){
	int suma=0;
	
	for(int i=0;i<tam;i++){
		suma += vec[i];
	}
	return suma;
}*/
//MODIFICAR EL TAMAÑO DE NUESTRO VECTOR
#include<iostream>
#include<vector>

using namespace std;

int main(){
	//vector de 20 elementos
	vector<int> B(20,9);
	//Colocamos el tamaño del vector
	cout<<"El tamaño anterior era: "<<B.size()<<endl;
	//Modificando el tamaño
	B.resize(5);
	//El nuevo tamaño del vector
	cout<<"El nuevo tamaño es: "<<B.size()<<endl;
	
	return 0;
}
