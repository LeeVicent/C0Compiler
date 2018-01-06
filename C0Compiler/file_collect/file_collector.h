/*
* FileCollector类：对整个工程文件进行组织管理，附加文件属性信息
*                            并对文件执行“预处理”（格式化文档，而不是预编译指令）
* 主要任务：
* 1. 删除连续空白符（空格，回车，制表）
* 2. 附加文件的路径信息
* 3. 新建文件，为预处理过后文件，同源文件名
*/

#ifndef FILE_COLLECTOR_H_
#define FILE_COLLECTOR_H_
#include <fstream>   //考虑使用ifstream类（只读）,因为编译的过程（包括预处理）不应该修改源码

namespace C0
{
	using std::fstream;
	using std::ios;
	class File
	{
	public:
		fstream *file_;   //“预处理”文件指针为动态内存

	public:
		File();
		File(char *fileName);
		~File();

	private:

	};


}


#endif // !FILE_COLLECTOR_H_

