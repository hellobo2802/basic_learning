// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
��������ע�����
������Ϊ��������: const���벻�����������ط�ʽ
������������Ĭ�ϲ���������ʱ����ֶ����ԡ�����ʱ��������Ҫ����Ĭ�ϲ���
*/
void func(int &a)
{
    cout << "func(int &a)" << endl;
}

void func(const int &a)  // const֮�󣬲������Ͳ�ͬ����������
{
    cout << "func(const int &a)" << endl;
}

void func2(int a)
{
    cout << "func2(int a)" << endl;
}

void func2(int a, int b = 1)
{
    cout << "func2(int a, int b = 1)" << endl;
}



int main()
{
   int a = 12;
   func(a);
   func(10);  // const int & a = 10: �Ϸ��﷨

   //  func2(1);  // �������ֶ����ԣ�����
   system("pause");
   return 0;
}
