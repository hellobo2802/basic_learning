#include <iostream>
#include <vector>

using namespace std;

// ����ָ����������е�Ԫ��
int main()
{
   int a[] = {10,0,1,2,3,4,5,6,7,8,9};
   cout << "���÷����鿴����ĵ�һ��Ԫ�أ�" << a[0] << endl;
   cout << "ָ�뷽�����������ÿһ��ֵ��" << endl;
   // int * p = &a[0]; // ��ȷ
   /* Ϊʲô���µķ�ʽ�Ǵ���ģ�
   int * p = &a;
   a��������������׵�ַ������������Ҫ��&����
   */
   int * p = a;
   for(int i = 0;i < sizeof(a) / sizeof(a[0]);i++)
   {
    cout << *p << " ";
    p++; //  ָ��ƫ��
   }
   cout << endl;
   system("pause");
   return 0;
}
