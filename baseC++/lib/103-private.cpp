// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
成员设置为私有：自己控制读写；写操作可以检查数据的有效性
*/
class Person
{
private:
    string name;
    int age;
    string lover;

public:
    void setName(string name)  // 可写
    {
        this->name = name;
    };
    void setAge(int age)  // 可写
    {
        if(age < 0 || age > 150)  // 判断数据的有效性
        {
            cout << "age范围错误" << endl;
            this->age = 0;
            return;  // 退出
        }
        else
        {
            this->age = age;
        }
    };
    void setLover(string lover)  // 可写
    {
        this->lover = lover;
    };
    string getName()  // 可读
    {
        return name;
    };
    int getAge()  // 可读
    {
        return age;
    };
    string getLover()  // 可读
    {
        return lover;
    };
};
int main()
{
   Person p1;
   p1.setName("刘少博");
   p1.setAge(223);
   p1.setLover("冯攀峰");
   cout << "姓名：" << p1.getName() << endl;
   cout << "年龄：" << p1.getAge() << endl;
   cout << "爱人：" << p1.getLover() << endl;

   system("pause");
   return 0;
}
