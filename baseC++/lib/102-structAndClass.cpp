// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
strutc: 成员默认权限为public;
class：成员默认权限为private;
*/
class C1
{
    int a;  // 默认私有
};
struct C2
{
    int b;  // 默认公共
};
int main()
{
   C1 c1;
   C2 c2;
   //  c1.a = 1; 显示c1成员为私有
   c2.b = 0;
   system("pause");
   return 0;
}
