//Herencia en POO
#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona {
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};
Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

int main(){
	Persona al1("Pepe",20);
	al1.mostrarPersona();

	system("pause");
	return 0;
}
