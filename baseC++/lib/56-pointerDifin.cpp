#include <iostream>
#include <vector>

using namespace std;
// ָ����ǵ�ַ

int main()
{
   int a = 1;
   // ָ�붨���﷨���������� * ָ�������
   int * p;
   p = &a; // &a ��ȡa�ĵ�ַ
   cout << "a�ĵ�ַ��" << (int)&a << endl; 
   cout << "p��" << (int)p << endl; 

   // ͨ��ָ���ȡ��ַ�������÷�ʽ *p
   cout << "a = " << *p << endl;
   system("pause");
   return 0;
}
