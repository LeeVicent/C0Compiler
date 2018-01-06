#include "file_collector.h"

C0::File::File()
{
	fstream *file = new fstream("Test.txt");
	this->file_ = file;
}

C0::File::File(char * fileName)
{
	fstream *file = new fstream(fileName);
	this->file_ = file;
}

C0::File::~File()
{
}
