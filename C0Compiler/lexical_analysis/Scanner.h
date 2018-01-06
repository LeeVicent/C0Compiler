/*
* Scanner类：扫描源文件，将源文件转换为线性的字符序列，为解析器提供输入
* 每次的函数调用，返回一个字符（注意缓冲区问题）
*/
#ifndef SCANNER_H_
#define SCANNER_H_
#include "../file_collect/file_collector.h"
namespace C0
{
	class Scanner
	{

	public:
		Scanner();
		Scanner(File file);
		
	};
}



#endif // SCANNER_H_

