// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
// ����Ȩ��
public: ��Ա  �����ڿ��Է���  ������Է���
protected: ��Ա  �����ڿ��Է���  ���ⲻ���Է���  ������Է���
private: ��Ա  �����ڿ��Է���  ���ⲻ���Է���  ���಻���Է���
*/
class Person
{
public:
    string name;
protected:
    string car;
private:
    string password;
public:
    void setFor(string name, string car, string password)  // ���ڿ��Է���
    {
        this->name = name;
        this->car = name;
        this->password = password;
    }
};
int main()
{
   Person p1;
   p1.name = "����";
   // p1.car = "����";  �������ⲻ���Է���
   // p1.password = "111";  �������ⲻ���Է���
   system("pause");
   return 0;
}
