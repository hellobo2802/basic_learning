// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;
const double PI = 3.1415926;

/*
类的封装：将属性和行为放在一个对象中
*/
class Circle
{
public:
    // 属性
    int r;  // 半径
    // 行为
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
        cout << "学生姓名：" << name << " 学生学号：" << stu_id << endl;
    }
};
int main()
{
   Circle c1;  // 创建对象实例
   c1.r = 2;
   cout << "圆的周长：" << c1.caculateZC() << endl;

   Student s1, s2;
   s1.name = "冯攀峰";
   s1.stu_id = "1314";
   s1.show();

   s2.setName("刘少博");
   s2.setId("521");
   s2.show();
   system("pause");
   return 0;
}
