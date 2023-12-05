// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
   引用：给变量取别名，操作同一块地址空间
   语法：数据类型 &别名 = 原名
*/

int main()
{
   int a = 1, d = 2;
   int &b = a;  // 取别名
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;

   b = 0;
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;

   // 引用必须初始化、
   // int &c;  // 报错：声明为引用，必须初始化
   // &b = d;  // 错误：不可更换别名的联系原名
   b = d;  // 赋值操作，不是更改
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "d = " << d << endl;
   system("pause");
   return 0;
}
