#include <iostream>
#include <vector>

using namespace std;
// ָ��ռ���ڴ棺32λϵͳ��ռ��4λ��64λϵͳ��ռ��8λ
int main()
{
   // ����ָ��
   int a = 1;
   int * p = &a;
   cout << "ָ��ռ���ڴ棺" << sizeof(int *) << endl;
   cout << "ָ��ռ���ڴ棺" << sizeof(double *) << endl;
   cout << "ָ��ռ���ڴ棺" << sizeof(p) << endl;
   system("pause");
   return 0;
}
