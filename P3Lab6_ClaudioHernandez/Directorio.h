#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include "FileSystemNode.h"
#include <vector>
#include <string>
using namespace std;
class Directorio : public FileSystemNode
{
	private:
				vector<FileSystemNode*> hijos;

	public:
		Directorio(string,string ,FileSystemNode*);
		virtual string toString();
		virtual  string getNombre();
		void imprimirRecursivo(int);
		void agregarDirectorio(FileSystemNode*);
		void buscar(string);
		 void agregarArchivo(FileSystemNode*);
		
		~Directorio();
	protected:
};

#endif