// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;
const double PI = 3.1415926;

/*
��ķ�װ�������Ժ���Ϊ����һ��������
*/
class Circle
{
public:
    // ����
    int r;  // �뾶
    // ��Ϊ
    double caculateZC()
    {
        return 2 * PI * r;
    }
};
class Student
{
public:
    string name;
    string stu_id;
    void setName(string name)
    {
        this->name = name;
    }
    void setId(string stu_id)
    {
        this->stu_id = stu_id;
    }
    void show()
    {
        cout << "ѧ��������" << name << " ѧ��ѧ�ţ�" << stu_id << endl;
    }
};
int main()
{
   Circle c1;  // ��������ʵ��
   c1.r = 2;
   cout << "Բ���ܳ���" << c1.caculateZC() << endl;

   Student s1, s2;
   s1.name = "���ʷ�";
   s1.stu_id = "1314";
   s1.show();

   s2.setName("���ٲ�");
   s2.setId("521");
   s2.show();
   system("pause");
   return 0;
}
