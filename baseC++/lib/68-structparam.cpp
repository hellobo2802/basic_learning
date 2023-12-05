#include <iostream>
#include <vector>

using namespace std;
/*
结构体作为参数：值传递(.)、地址传递(->)
*/
struct fpf
{
    string name;
};
// 值传递
void printLover(fpf f)
{
   f.name = "fpf";
   cout << f.name << "的爱人是刘少博" << endl;
}
void changeName(fpf * f)
{
   // f为指针：使用->操作
   f->name = "刘少博";
   cout << "名字变更为" << f -> name << endl;
}
int main()
{
   fpf f = {"冯攀峰"};
   printLover(f);
   cout << f.name << "的爱人是刘少博" << endl; // 同理，值传递不改变实参值

   changeName(&f);
   system("pause");
   return 0;
}
