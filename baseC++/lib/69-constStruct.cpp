#include <iostream>
#include <vector>

using namespace std;
/*
�ṹ�峣����const �ṹ���� * �ṹ�����������const ��ֹ�����е������
*/
struct fpf
{
    string name;
    string lover;
};
void printFpf(const fpf * f) // ���βθ�Ϊָ�룬���Լ����ڴ棨32-4�������Ҳ��Ḵ���µĸ���
{
   // f->lover = "xx"; �����������޸�
   cout << f -> name << endl;
   cout << f -> lover << endl;
}
int main()
{
   fpf f = {"���ʷ�","���ٲ�"};
   printFpf(&f);
   system("pause");
   return 0;
}
