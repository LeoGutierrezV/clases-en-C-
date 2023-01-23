/*
	POLIMORFISMO (en POO) es la capacidad que tienen ciertos lenguajes para hacer que, 
	al enviar el mismo mensaje (o, en otras palabras, invocar al mismo método) desde 
	distintos objetos, cada uno de esos objetos pueda responder a ese mensaje (o a 
	esa invocación) de forma distinta.
	
	
	Cuando vemos polimorfismo.
	funcion virtual
	punteros
	
	
	
	Persona					|				Animal
	Mensaje:Caminar;
	La persona camina			El animal camina en 4 patas
	en sus 2 piernas
	
	
	Persona
	Alumno
	Profesor
*/


#include<iostream>
#include<stdlib.h>
using namespace std;
//Clases
//Clase Padre
class Persona {
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		virtual void mostrar();
};
//Clases Hijas
class Alumno : public Persona {
	private:
		float notaFinal;
	public:
		Alumno(string,int,float);
		void mostrar();
};
class Profesor : public Persona {
	private: 
		string materia;
	public:
		Profesor(string,int,string);
		void mostrar();
};

//Constructores
//Constructor Clase Padre
Persona::Persona(string _nombre,int _edad) {
	nombre = _nombre;
	edad = _edad;
}
//Constructor Clases Hijas
Alumno::Alumno(string _nombre,int _edad,float _notaFinal): Persona(_nombre,_edad){
	notaFinal = _notaFinal;
}
Profesor::Profesor(string _nombre,int _edad,string _materia):Persona(_nombre, _edad){
	materia = _materia;
}

//Funciones
//Funcion Clase Padre
void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
//Funcion Clases Hijas
void Alumno::mostrar(){
	Persona::mostrar();
	cout<<"Nota Final: "<<notaFinal<<endl;
}
void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}

int main(){
	
	Persona *vector[3];
	
	vector[0] = new Alumno("Leo",21,15.5);
	vector[1] = new Profesor("Jose",25,"Geogra");
	
	vector[0]->mostrar();
	cout<<"\n";
	vector[1]->mostrar();
	
	system("pause");
	return 0;
}









