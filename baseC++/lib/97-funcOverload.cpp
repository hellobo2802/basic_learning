// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
�������أ������������ظ�����߸�����
����������ͬ�������򣻺�������ͬ�������β����Ͳ�ͬ��������ͬ����˳��ͬ������ֵ��ͬ����������
*/

void func()
{
   cout << "func() " << endl;
}

void func(int a)  // ���ϲ�����ͬ
{
   cout << "func(int a)  " << endl;
}

void func(double a)  // ���ϲ������Ͳ�ͬ
{
   cout << "func(double a) " << endl;
}

void func(int a, double b)  // ���ϲ���������ͬ
{
   cout << "func(int a, double b) " << endl;
}

void func(double a, int b)  // ���ϲ���˳��ͬ
{
   cout << "func(double a, int b) " << endl;
}

// ����ֵ��������Ϊ��������
// int func()
// {
//    cout << "func() " << endl;
// }

int main()
{
   func();
   func(1);
   func(1.314);
   func(1, 1.314);
   func(1.314, 2);
   system("pause");
   return 0;
}
