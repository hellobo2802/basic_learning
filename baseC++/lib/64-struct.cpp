#include <iostream>
#include <vector>

using namespace std;
// �����ṹ��
/*
�﷨��
struct structName{����1 ����1����;����2 ����2����...}A;
����ʵ�������ַ�����
struct structName s1;struct structName s2 = {...};�ڴ����ṹ��ʱ�Զ�����
*/
struct Student
{
    int age;
    string name;
    bool gender;
    double score;
}s3; // �����ַ���
int main()
{
   // ��������ʱ struct ����ʡ��
   Student ss;
   struct Student s1;
   s1.age = 10; s1.name = "���ʷ�"; s1.gender = 0; s1.score = 100.0;
   // cout << s1 << endl; ����
   cout << s1.name << endl;
   
   s3.name = "ϲ��";
   cout << s3.name << endl;

   struct  Student s2 = {11,"���ٲ�",1,100.0};
   cout << s2.name << endl;

   system("pause");
   return 0;
}
