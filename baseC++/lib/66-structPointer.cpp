#include <iostream>
#include <vector>

using namespace std;
/*
�ṹ��ָ��
�����ṹ��ָ�룺�ṹ���� * ָ���� = &�ṹ�������
ָ����ʽṹ��ֵ���ṹ������� -> �ṹ������
*/
struct Student
{
    string name;
    double score;
};
int main()
{
   Student s1;
   Student s2;

   // ����ָ��
   Student * p1 = &s1;
   Student * p2 = &s2;
   // ʹ��ָ����ʽṹ���ֵ ->
   p1 -> name = "���ʷ�";
   p2 -> name = "���ٲ�";
   cout << p1 -> name << endl;
   cout << p2 -> name << endl;
   system("pause");
   return 0;
}
