// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
// 访问权限
public: 成员  在类内可以访问  类外可以访问
protected: 成员  在类内可以访问  类外不可以访问  子类可以访问
private: 成员  在类内可以访问  类外不可以访问  子类不可以访问
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
    void setFor(string name, string car, string password)  // 类内可以访问
    {
        this->name = name;
        this->car = name;
        this->password = password;
    }
};
int main()
{
   Person p1;
   p1.name = "李四";
   // p1.car = "宝马";  报错，类外不可以访问
   // p1.password = "111";  报错，类外不可以访问
   system("pause");
   return 0;
}
