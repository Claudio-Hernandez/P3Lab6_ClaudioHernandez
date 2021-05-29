#ifndef PPT_H
#define PPT_H

#include "Archivo.h"
#include <string>
using namespace std;
class PPT : public Archivo
{
	private:
		string titulo;
		int numSlides;
		int numPlantilla;
		bool tieneAnimaciones;
	public:
		PPT(string,int,int,bool,string,string,FileSystemNode*);
		virtual string toString();
		virtual string getNombre();
	protected:
};

#endif