//MODIFICAR EL TAMA�O DE NUESTRO VECTOR
#include<iostream>
#include<vector>

using namespace std;

int main(){
	//vector de 20 elementos
	vector<int> B(20,9);
	//Colocamos el tama�o del vector
	cout<<"El tama�o anterior era: "<<B.size()<<endl;
	//Modificando el tama�o
	B.resize(5);
	//El nuevo tama�o del vector
	cout<<"El nuevo tama�o es: "<<B.size()<<endl;
	
	return 0;
}
