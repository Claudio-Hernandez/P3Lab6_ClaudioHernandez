#include "PPT.h"
PPT::PPT(string titulo2,int nums,int plan,bool anim,string nombre,string autor,FileSystemNode* gomez):Archivo(nombre,autor,gomez){
	titulo =  titulo2;
	numSlides = nums;
	numPlantilla = plan;
	tieneAnimaciones = anim;	
}
string PPT::toString(){
	string ns = to_string(numSlides);
	string p =  to_string(numSlides);
	string animac =  to_string(tieneAnimaciones);
	return "PPT\n  Titulo: "+titulo+"\n  numero de slides:" +ns+"\n  Numero de plantilla:"+p+"Tiene animaciones:"+animac;
}
string PPT::getNombre(){
	return this->nombre;
}