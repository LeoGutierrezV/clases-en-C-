//Getters y Setters

#include<iostream>
#include<stdlib.h>
using namespace std;
//Clase
class Hola{
	private:
		int x,y;
	public:
		Hola();
		void setHola(int,int);
		int getHolaX();
		int getHolaY();
};
//Contructor
Hola::Hola(){
	
}

void Hola::setHola(int _x,int _y){
	x= _x;
	y=_y;
}

int Hola::getHolaX(){
	return x;
}
int Hola::getHolaY(){
	return y;
}

int main(){
	Hola saludo;
	
	saludo.setHola(15,55);
	cout<<saludo.getHolaX()<<endl;
	cout<<saludo.getHolaY()<<endl;
	
	system("pause");
	return 0;
}
