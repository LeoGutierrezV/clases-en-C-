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
