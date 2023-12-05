#include <iostream>
#include <vector>

using namespace std;
/*
结构体常量：const 结构体名 * 结构体变量名：加const 防止函数中的误操作
*/
struct fpf
{
    string name;
    string lover;
};
void printFpf(const fpf * f) // 将形参改为指针，可以减少内存（32-4），而且不会复制新的副本
{
   // f->lover = "xx"; 报错，不允许修改
   cout << f -> name << endl;
   cout << f -> lover << endl;
}
int main()
{
   fpf f = {"冯攀峰","刘少博"};
   printFpf(&f);
   system("pause");
   return 0;
}
