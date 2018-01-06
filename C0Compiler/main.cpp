#include "stdafx.h"
using namespace std;


int a = 0;  //VS Git ²âÊÔ


int main(int argc, char **argv) 
{
	C0::File f("Test.txt");
	C(f.file_->is_open());

	system("pause");
}