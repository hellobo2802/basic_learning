// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
strutc: ��ԱĬ��Ȩ��Ϊpublic;
class����ԱĬ��Ȩ��Ϊprivate;
*/
class C1
{
    int a;  // Ĭ��˽��
};
struct C2
{
    int b;  // Ĭ�Ϲ���
};
int main()
{
   C1 c1;
   C2 c2;
   //  c1.a = 1; ��ʾc1��ԱΪ˽��
   c2.b = 0;
   system("pause");
   return 0;
}
