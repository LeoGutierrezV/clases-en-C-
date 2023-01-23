//AGREGACION:
//-CELULAR --> CLASE CONTENEDOR
//-CHIP --> CLASE ELEMENTO

//CELULAR->
/*modelo : string
nrochips : int
Chips : int
-----------------
+Celular(modelo)
+mostrar()
+agregarChip(nuevoChip)

//CHIP->
empresa : string
numero : int
-----------------
+chip(empresa, numero)
+mostrar()

*/

//ARCHIVOS

#include<iostream>
#include<stdlib.h>
#include<fstream>//Libreria que nos ayudara a desarrollar nuestro archivo

using namespace std;

void escribir();

int main(){
	escribir();
	
	return 0;
}

void escribir(){
	ofstream file;
	string nameFile,textFile;

	cout<<"Digite el nombre del archivo: ";
	getline(cin,nameFile);
	
	file.open(nameFile.c_str(),ios::out);//Abrir archivo
	
	if(file.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"\nDigite el texto: ";
	getline(cin,textFile);
	
	file<<textFile;
	
	file.close();//Cerra archivo
}
















