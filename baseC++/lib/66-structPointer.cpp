#include <iostream>
#include <vector>

using namespace std;
/*
结构体指针
创建结构体指针：结构体名 * 指针名 = &结构体变量名
指针访问结构体值：结构体变量名 -> 结构体属性
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

   // 创建指针
   Student * p1 = &s1;
   Student * p2 = &s2;
   // 使用指针访问结构体的值 ->
   p1 -> name = "冯攀峰";
   p2 -> name = "刘少博";
   cout << p1 -> name << endl;
   cout << p2 -> name << endl;
   system("pause");
   return 0;
}
