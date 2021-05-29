#ifndef FILESYSTEMNODE_H
#define FILESYSTEMNODE_H
#include <string>
using std::string;
class FileSystemNode
{
	public:
		virtual	string toString()=0;
		FileSystemNode();
		virtual string getNombre()=0;
	
		FileSystemNode(string,string,FileSystemNode*);
		~FileSystemNode();
	protected:
			void setNombre(string);
		void setAutor(string);
		void setFile();
		string nombre="root";
		string autor = "claudio";
		FileSystemNode* padre = NULL;
};

#endif