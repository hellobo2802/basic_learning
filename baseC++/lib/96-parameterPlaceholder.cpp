// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
����ռλ��
�����б���ֻд�������ͣ���д�βα�������
ʵ����ʱ��ռλ������Ҫ����ֵ��
ռλ������������Ĭ��ֵ
*/
void func(int a, int = 10)  // ����2Ϊռλ��
{
    cout << "a = " << a << endl;
}
int main()
{
   func(1, 2);
   system("pause");
   return 0;
}
