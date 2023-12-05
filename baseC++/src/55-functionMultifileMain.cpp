#include <iostream>
#include "swap.h" // 双引号表示自定义的头文件

using namespace std;
// 函数的分文件编写
/*
1. 创建.h的头文件（一般在include文件夹下）
2. 创建.cpp的源文件(一般在lib文件夹下)
3. 在头文件中写函数的声明
4. 在源文件中写函数的定义：要写各种函数的头文件，包括自己写的头文件
5. main函数文件中调用：要写各种函数的头文件，包括自己写的头文件（main函数一般在src文件夹下，还包括makefile等等）
*/
// main中进行函数的调用
int main()
{
   int num1 = 100, num2 = 200;
   swap(num1, num2);
   system("pause");
   return 0;
}
