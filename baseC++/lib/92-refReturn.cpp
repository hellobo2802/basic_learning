// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
����������ֵ����Ҫʹ�����ò����Ѿ��ͷŵľֲ�������ַ�����õķ���ֵ������Ϊ��ֵ������ֵ��
*/

int & test01()
{
    int a = 10;  // �ֲ����������ջ��
    int & b = a;
    return b;
}

int & test02()
{
    static int a = 20;  // ��a��Ϊ��̬�����������ȫ����������������ͷš���һ��static�����ã��ӳ�ȫ�ֱ������ڡ���һ����ȫ�ֱ���������С��ȫ�ֱ���������Ҫд����ǰ�� 
    return a;
}

int main()
{
   int & c = test01();
   cout << c << endl;  // ��Ҫ������ʹ�ñ��������Ѿ��ͷŵ��ڴ�

   int & b = test02();
   cout << b << endl;
   
   test02() = 1000;  // ���ÿ�����Ϊ��ֵ�������¸�ֵ
   cout << b << endl;

   system("pause");
   return 0;
}
