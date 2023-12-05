// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
���õı��ʣ����õı�����һ��ָ�볣����ָ��ָ�򲻿����޸ģ�ָ���ֵ�����޸�
e.g. int & ref = a  ===== int * const ref = &a
e.g. ref = 1 ===== *ref = 1
*/
// ����������Ϊ���ã�ת��Ϊint * const ref = &a
void func(int & ref)
{
    ref = 2;  // ����������Ϊ���ã�ת��Ϊ *ref = 2
}

int main()
{
   int a = 1;
   int & b = a;  // ת��Ϊָ�볣�� int * const b = &a
   b = 0;  // ת��Ϊ *b = 0
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   func(b);
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   system("pause");
   return 0;
}
