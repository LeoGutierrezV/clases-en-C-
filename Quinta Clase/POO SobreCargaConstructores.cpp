// Uso de 1 Constructor
/*#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha {
	private://Atributos
		int dia,mes,anio;
	public://Metdos
		Fecha(int,int,int);//Construtor1
		void mostrarFecha();
};
//Constructor 1
Fecha::Fecha(int _dia,int _mes, int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}
void Fecha::mostrarFecha(){
	cout<<"La Fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main(){
	Fecha hoy(13,10,2022);	
	
	hoy.mostrarFecha();
	
	system("pause");
	return 0;
}*/

//Uso de 2 Constructores
#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha {
	private://Atributos
		int dia,mes,anio;
	public://Metdos
		Fecha(int,int,int);//Construtor1
		Fecha(long);//contructor2
		~Fecha();//Destructor
		void mostrarFecha();
};

//dia/mes/año
//año/mes/dia
//añomesdia
//20221013

//Constructor 1
Fecha::Fecha(int _dia,int _mes, int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

//Constructor 2
Fecha::Fecha(long fecha){
	anio = int(fecha/10000);//Extraer el año
	mes = int((fecha-anio*10000)/100);//Extraer el mes
	dia = int(fecha-anio*10000-mes*100);//Extraer el mes
}

// Constructor hora:
/*Tiempo::Tiempo(int tiempoS){
	tiempoS %= 3600;
	horas = tiempoS/3600; //Extraer la hora
	minutos = tiempoS/60; //Extraer minutos
	segundo = tiempoS%60; //Extraer los segundos
}*/

void Fecha::mostrarFecha(){
	cout<<"La Fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main(){
	
	Fecha hoy(13,10,2022);
	Fecha manana(20221014);
	
	hoy.mostrarFecha();
	manana.mostrarFecha();
	
	hoy.~hoy();
	
	return 0;
}
