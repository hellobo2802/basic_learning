#include <iostream>
#include <vector>

using namespace std;
/*
�����ĳ�����ʽ��
�޲��޷����޲��з����в��޷����в��з�
*/
void test1()
{
    cout << "�޲��޷��Ĳ��԰���" << endl;
}
void test2(int a)
{
    cout << "�в��޷��Ĳ��԰���" << endl;
    cout << "�β�a=" << a << endl;
}
int test3()
{
    cout << "�޲��з��Ĳ��԰���" << endl;
    return 1;
}
int test4(int b)
{
    cout << "�в��з��Ĳ��԰���" << endl;
    cout << "�β�b=" << b << endl;
    return 2;
}

int main()
{
   test1();
   int a = 0;test2(a);
   cout << "�޲��з��ķ���ֵ��" << test3() << endl;
   int b =1;
   cout << "�в��з��ķ���ֵ��" << test4(b) << endl;
   system("pause");
   return 0;
}
