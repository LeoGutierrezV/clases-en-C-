//PERSONAS
//Atributos:
//-Edad();
//-dni();

//ALUMNOS
//Atributos:
//-nombre();
//-notas();


//class Persona.

//class Alumnos : public Persona

//Herencia:Ejemplo:
/*#include<iostream>
#include<stdlib.h>
using namespace std;
//=====================================
//Clases
//=====================================
class Persona {
	private://Atributos
		string nombre;
		int edad;
	public://metodos
		Persona(string,int);
		void mostrarPersona();
};

class Alumno : public Persona {
	private: //Atributos
		string codigoAlumno;
		float notaFinal;
	public: //Metodos
		Alumno(string,int,string,float);//Primero se define la clase padre y luego la clase hija
		void mostrarAlumno();
};
//=====================================
//Constructores
//=====================================
//Constructor de la clase Persona
Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

//Constructor de la clase Alumno
Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal): Persona(_nombre, _edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

//=====================================
//Funciones o Metodos.
//=====================================
//Funcion mostrar Alumno.
void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno: "<<codigoAlumno<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}

//Funcion mostrar Persona.
void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}



int main(){
	Alumno al1("Leo",21,"0001",15);
	al1.mostrarAlumno();
	
	system("pause");
	return 0;
}
*/
//override
#include <iostream>
using namespace std;
class Persona {
 private:
  string nombre;
  int edad;

  void metodoPrivado() {
    cout << "Solo puedo ser llamado desde dentro de la clase";
  }

 public:Persona() {
    cout << "Se llama al constructor";
    this->metodoPrivado();
  }
  Persona(string nombre, int edad) {
    this->edad = edad;
    this->nombre = nombre;
  }

  int getEdad() { return this->edad; }

  void setEdad(int edad) { this->edad = edad; }

  string getNombre() { return this->nombre; }

  void setNombre(string nombre) { this->nombre = nombre; }

  void saludar() {
    cout << "Hola, me llamo " << this->nombre << " y mi edad es "<< this->edad << "\n";
  }
  virtual void saludarAmigo(string nombre) {
    cout << "Hola " << nombre << ", me llamo " << this->nombre<< " y mi edad es " << this->edad << "\n";
  }
};

class Estudiante : public Persona {
 public:
  Estudiante(string nombre, int edad, std::string escuela): Persona(nombre, edad) {}

  void estudiar() {cout << "*estudia*\n"; }
  void saludarAmigo(string nombre) override {
    cout << "Como estas " << nombre << ", me llamo " << this->getNombre()<< " y mi edad es " << this->getEdad() << "\n";
  }
};

int main() {
  Persona p1("Sandro", 21);
  p1.saludar() ;
  Persona p2;
  p2.setEdad(1);
  p2.setNombre("Joel");
  p2.saludar();
  Estudiante e1("Samir", 8, "Ninguna");
  e1.saludar();
  e1.saludarAmigo("Jacky");
  e1.estudiar();
}










