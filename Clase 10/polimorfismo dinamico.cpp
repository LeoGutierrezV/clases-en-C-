//Polimorfismo dinamico

#include<iostream>
using namespace std;

class Base {
	public:
		virtual void PrimerMetodo()
		{
			cout<<"Clase Base Primero Metodo"<<endl;
		}
		void SegundoMetodo()
		{
			cout<<"Clase Base Segundo Metodo"<<endl;
		}
};

class Derivada:public Base {
	public:
		void PrimerMetodo()
		{
			cout<<"Clase Derivada Primer Metodo"<<endl;
		}
		void SegundoMetodo()
		{
			cout<<"Clase Derivada Segundo Metodo"<<endl;
		}
};

int main() {
	Base *a = new Derivada;
	a->PrimerMetodo();
	a->SegundoMetodo();
	return 0;
}
