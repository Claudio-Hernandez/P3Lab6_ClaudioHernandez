#include "CPP.h"
using namespace std;

string CPP::toString(){
	string numLineas =  to_string(lineasCodigo);
	string numerrores =  to_string(errores);
	return "Archivo: :cpp:\n  Numero de lineas:"+numLineas+" \n  Numero de errores:"+numerrores;
}
CPP::CPP(int nolineas,int errorez ,string nombre,string autor,FileSystemNode*gomez):Archivo(nombre,autor,gomez){
	lineasCodigo =  nolineas;
	errores =  errorez;
	
}
string CPP::getNombre(){
	return this->nombre;
}