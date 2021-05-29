#ifndef JPG_H
#define JPG_H

#include "Archivo.h"
#include <string>
using namespace std;
class JPG : public Archivo
{
	private:
		bool conFlash =false;
		string resolucion;
		double largo = 0;
		double ancho = 0;
	public:
		virtual string toString();
		virtual string getNombre();
		JPG(bool,string,double,double,string,string,FileSystemNode*);
	protected:
};

#endif