#include "FileSystemNode.h"

FileSystemNode::FileSystemNode()
{
}
void FileSystemNode::setNombre(string b)
{
	nombre = b;
}
void FileSystemNode::setAutor(string b)
{
	autor = b;	
}
void FileSystemNode::setFile()
{
	padre =0;
}
FileSystemNode::FileSystemNode(string nombren,string autorn,FileSystemNode* padrenuevo )
{
	nombre= nombren;
	autor =  autorn;
	padre =  padrenuevo;
	
}

string FileSystemNode::toString( )
{
return  0;	
}

FileSystemNode::~FileSystemNode()
{
	delete padre;
}