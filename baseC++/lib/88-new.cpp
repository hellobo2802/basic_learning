// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
���ٶ�������
�﷨��new ��������()
�ͷ�ʹ��delete
����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
*/

int * func()
{
    int * p = new int();
    *p = 20;
    return p;
}

void test()
{
    int * p1 = func();
    cout << "��������new p��ֵΪ��" << *p1 << endl;  // 20
    delete p1;
    cout << "��������new p��ֵΪ��" << *p1 << endl;  // ����
}

void test2()
{
    int * p2 = new int[10];  // [10]��ʾ���鳤��
    for(int i = 0; i < 10 ; i++)
    {
        p2[i] = i + 1;  // ����ָ�����ֱ�Ӱ����������
    }
    for(int i = 0; i < 10 ; i++)
    {
        cout << p2[i] << endl;
    }
    delete [] p2;  // �ͷŶ������顣delete [] ������ 
}
int main()
{
   test();
   test2();
   system("pause");
   return 0;
}

