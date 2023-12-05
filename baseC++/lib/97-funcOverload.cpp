// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
函数重载：函数名可以重复，提高复用性
满足条件：同意作用域；函数名相同；函数形参类型不同、个数不同或者顺序不同；返回值不同不属于重载
*/

void func()
{
   cout << "func() " << endl;
}

void func(int a)  // 与上参数不同
{
   cout << "func(int a)  " << endl;
}

void func(double a)  // 与上参数类型不同
{
   cout << "func(double a) " << endl;
}

void func(int a, double b)  // 与上参数个数不同
{
   cout << "func(int a, double b) " << endl;
}

void func(double a, int b)  // 与上参数顺序不同
{
   cout << "func(double a, int b) " << endl;
}

// 返回值不可以作为重载条件
// int func()
// {
//    cout << "func() " << endl;
// }

int main()
{
   func();
   func(1);
   func(1.314);
   func(1, 1.314);
   func(1.314, 2);
   system("pause");
   return 0;
}
