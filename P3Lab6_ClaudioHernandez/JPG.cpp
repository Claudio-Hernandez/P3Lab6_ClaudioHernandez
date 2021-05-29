#include "JPG.h"
using namespace std;
JPG::JPG(bool flashk,string resolucionb,double anchor,double largor,string nombre,string autor,FileSystemNode* lopez):Archivo(nombre, autor,lopez){
 	conFlash =flashk;
	resolucion = resolucionb;
	 largo = largor;
	 ancho = anchor;
}
string JPG::toString(){
	string flash ;

	if(conFlash){
		flash = "si";
	}else{
		flash = "no";
	}
	string largov =  to_string(largo);
	string anchov =  to_string(ancho);
	return "JPG:\nTiene flash: "+flash+"\n  Resolucion:"+resolucion+"\n  ancho:"+anchov+"\n  largo:"+largov;
}
string JPG::getNombre(){
	return this->getNombre();
}