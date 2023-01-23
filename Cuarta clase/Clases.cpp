//Clases en C++

#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona {
	//Atributos:
	private:
		int edad;
		string nombre;
	//Metodos:
	public:
		Persona(int,string);//Constructor
		void leer();
		void correr();
};
//Constructor:
Persona::Persona(int _edad,string _nombre){
	edad= _edad;
	nombre= _nombre;
}

//Acciones:
void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo"<<endl;
}
void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo y tengo "<<edad<<" años."<<endl;
}

int main(){
	
	Persona p1 = Persona(20,"Alex");
	Persona p2(15,"Anita");
	Persona p3(34,"Susan");
	
	p1.leer();
	p2.correr();
	
	p3.leer();
	p3.correr();
	
	return 0;
}


/*
Ejercicio POO:
Ingresar nombre y edad de un usuario y preguntar que acción quiere realizar.
Resultado:
Ingresa tu nombre: Alex
Ingresa tu edad: 20
Que acción desea realizar:
Comer[1]:
Dormir[2]:
Ingrese el numero de la acción:2
Soy Alex tengo 20 años y voy a dormir.
*/

/*
	Ejercicio 2 POO Clases:
	Construya un clase llamada Cuadrado que tenga los siguientes atributos: largo y ancho, y los siguientes metodos: perimetro() y area(); 
	
	Ingresar el largo: 11
	Ingresar el ancho: 7
	El perimetro es: 36
*/
