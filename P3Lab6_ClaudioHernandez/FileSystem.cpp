#include "FileSystem.h"

FileSystem::FileSystem()
{
}
Directorio* FileSystem::getDi(){
	return root;
}
FileSystem::~FileSystem()
{
	delete root;
}