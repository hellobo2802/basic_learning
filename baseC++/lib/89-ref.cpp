// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
   ���ã�������ȡ����������ͬһ���ַ�ռ�
   �﷨���������� &���� = ԭ��
*/

int main()
{
   int a = 1, d = 2;
   int &b = a;  // ȡ����
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;

   b = 0;
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;

   // ���ñ����ʼ����
   // int &c;  // ��������Ϊ���ã������ʼ��
   // &b = d;  // ���󣺲��ɸ�����������ϵԭ��
   b = d;  // ��ֵ���������Ǹ���
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "d = " << d << endl;
   system("pause");
   return 0;
}
