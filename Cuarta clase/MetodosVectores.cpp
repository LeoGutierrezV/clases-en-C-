//Metodo size();
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
	//vector de 20 elementos enteros
	vector<int> B(20,9);
	//declaramos un enteropara almacenar el tamaño
	int num_elementos;
	
	num_elementos=B.size();
	
	cout<<"En B hay "<<num_elementos<<" elementos."<<endl;
	
	return 0;
}*/

//Acceso a los elementos.
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	//
	vector<int> A(20,9);
	
	cout<<"El tercer elemento del vector es:"<<A[2]<<endl;
	return 0;
}*/

//Eliminar elementos erase();
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
	//vector de 10 elementos
	vector<int> A(10);
	
	//inicializamos todos los elementos en este ciclo
	for(int i=0;i<10;i++){
		A[i]=i+1;
	}
	//se muestra la longitud antes del borrado
	cout<<"la longitud total es:"<<A.size()<<endl;
	
	//borramos los elementos entre las posiciones 3 a 6
	A.erase(A.begin()+3,A.begin()+6);
	
	//mostrando la nueva longitud
	cout<<"La nueva longitud es: "<<A.size()<<endl;
	
	//mostrando el orden de los elementos
	for(int i=0;i<A.size();i++)
	cout<<A[i]<<" ";
	
	cout<<endl<<endl;
	
	return 0;
}*/

//Insertar elementos en nuestro Vector push_back() y insert();
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
	//vector de 10 elementos
	vector<int> A(6,9);
	//insertamos el valor 2 en la tercera posicion del array
	A.insert(A.begin()+4,3,-1);
	//mostramos el nuevo vector con el 2 que se inserto antes
	for(unsigned int i=0;i<A.size();i++)
	cout<<A[i]<<" ";
	
	cout<<endl<<endl;
	
	return 0;
}*/



