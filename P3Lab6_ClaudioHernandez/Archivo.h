#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "FileSystemNode.h"
#include <string>
using namespace std;
class Archivo : public FileSystemNode
{
	public:
		string toString()=0;
		virtual string getNombre()=0;
		Archivo(string,string,FileSystemNode*);
	protected:
		
};

#endif