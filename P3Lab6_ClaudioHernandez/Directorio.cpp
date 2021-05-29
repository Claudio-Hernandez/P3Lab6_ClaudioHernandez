#include "Directorio.h"
#include <string>
#include <iostream>
#include<cstring>
#include "CPP.h"
#include "PPT.h"
#include "JPG.h"
#include "Archivo.h"
using namespace std;
Directorio::Directorio(string nombre,string autor,FileSystemNode* gomez):FileSystemNode(nombre,autor,gomez)
{
}

void Directorio::agregarArchivo(FileSystemNode* b){
	hijos.push_back(b);
	
}
void Directorio::agregarDirectorio(FileSystemNode* b){
	hijos.push_back(b);
	
}
void Directorio::imprimirRecursivo(int profundidad){
	Directorio* actual;

	for(int i = 0;i<hijos.size();i++){
		for(int k=0;k<profundidad;k++){
			cout<<"-";
		}
		if(dynamic_cast<Directorio*>(hijos[i])){
			actual =dynamic_cast<Directorio*> (hijos[i]);
			cout<<actual->toString()<<"\n";
			//cout<<"nvfnvv";
			//actual->imprimirRecursivo(profundidad+1);			
		}else if (dynamic_cast<CPP*>(hijos[i])){
			//cout<<"jsdnvsvffdvfdfv";
			CPP* n = dynamic_cast<CPP*>(hijos[i]);
		//	CPP* n = hijos[i];
		//	cout<<"archivo";
			cout<<n->toString();
			cout<<"\n";
		}else if (dynamic_cast<PPT*>(hijos[i])){
			
			PPT* n = dynamic_cast<PPT*>(hijos[i]);
			//cout<<"archivo";
			n->toString();
			cout<<"\n";
		}else if (dynamic_cast<JPG*>(hijos[i])){
			
			JPG* p = dynamic_cast<JPG*>(hijos[i]);
			//cout<<"archivo";
			p->toString();
			cout<<"\n";
		}	
	//	cout<<hijos[i]->toString();
	}

}
void Directorio::buscar(string palabraclave){
	for(int i = 0;i<hijos.size();i++){
		string palabra =  hijos[i]->getNombre();
			if(palabra.find(palabraclave, 0)!=string::npos) {
			cout<<"\n==============================\n";
			cout<<hijos[i]->toString();
			break;

		}
	}
}
string Directorio::getNombre(){
	return this->nombre;
}
string Directorio::toString(){
	
	return "Directorio: " +this->getNombre()+"\nAutor:"+this->autor;
}
Directorio::~Directorio()
{
	for(int i = 0;i<hijos.size();i++){
		delete hijos[i];
	}
	hijos.clear();
}