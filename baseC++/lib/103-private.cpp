// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
��Ա����Ϊ˽�У��Լ����ƶ�д��д�������Լ�����ݵ���Ч��
*/
class Person
{
private:
    string name;
    int age;
    string lover;

public:
    void setName(string name)  // ��д
    {
        this->name = name;
    };
    void setAge(int age)  // ��д
    {
        if(age < 0 || age > 150)  // �ж����ݵ���Ч��
        {
            cout << "age��Χ����" << endl;
            this->age = 0;
            return;  // �˳�
        }
        else
        {
            this->age = age;
        }
    };
    void setLover(string lover)  // ��д
    {
        this->lover = lover;
    };
    string getName()  // �ɶ�
    {
        return name;
    };
    int getAge()  // �ɶ�
    {
        return age;
    };
    string getLover()  // �ɶ�
    {
        return lover;
    };
};
int main()
{
   Person p1;
   p1.setName("���ٲ�");
   p1.setAge(223);
   p1.setLover("���ʷ�");
   cout << "������" << p1.getName() << endl;
   cout << "���䣺" << p1.getAge() << endl;
   cout << "���ˣ�" << p1.getLover() << endl;

   system("pause");
   return 0;
}
