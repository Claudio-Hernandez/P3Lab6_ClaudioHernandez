#ifndef CPP_H
#define CPP_H

#include "Archivo.h"
#include <string>
using std::string;
class CPP : public Archivo
{
	private:
		int lineasCodigo;
		int errores;
	public:
		CPP(int,int ,string,string,FileSystemNode*);
		virtual string getNombre();
		virtual string toString();	
	protected:
};

#endif