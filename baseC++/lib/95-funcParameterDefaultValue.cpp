// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;
int add(int a, int b, int c);  // ��������Ĭ��ֵ��ʵ��ʱ��
/*
�﷨: ����ֵ����  ������������=Ĭ��ֵ��
�״�㣺
����ʵ��ʱ��һ��ĳλ����Ĭ��ֵ�������ң���󣩶�������Ĭ��ֵ��
����������д��Ĭ��ֵ����������ʱ�Ͳ�����дĬ��ֵ���������ɶ����ԡ���������ʵ��ֻ����һ����Ĭ�ϲ�����

*/
int add(int a, int b = 20, int c = 0)
{
    return a + b + c;
}

int main()
{
   cout << add(10, 10) << endl;  // ���ݵ�ֵ���ȼ�����
   system("pause");
   return 0;
}
