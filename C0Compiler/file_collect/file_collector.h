/*
* FileCollector�ࣺ�����������ļ�������֯���������ļ�������Ϣ
*                            �����ļ�ִ�С�Ԥ��������ʽ���ĵ���������Ԥ����ָ�
* ��Ҫ����
* 1. ɾ�������հ׷����ո񣬻س����Ʊ�
* 2. �����ļ���·����Ϣ
* 3. �½��ļ���ΪԤ��������ļ���ͬԴ�ļ���
*/

#ifndef FILE_COLLECTOR_H_
#define FILE_COLLECTOR_H_
#include <fstream>   //����ʹ��ifstream�ֻࣨ����,��Ϊ����Ĺ��̣�����Ԥ������Ӧ���޸�Դ��

namespace C0
{
	using std::fstream;
	using std::ios;
	class File
	{
	public:
		fstream *file_;   //��Ԥ�����ļ�ָ��Ϊ��̬�ڴ�

	public:
		File();
		File(char *fileName);
		~File();

	private:

	};


}


#endif // !FILE_COLLECTOR_H_

