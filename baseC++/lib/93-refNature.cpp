// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
引用的本质：引用的本质是一个指针常量，指针指向不可以修改，指针的值可以修改
e.g. int & ref = a  ===== int * const ref = &a
e.g. ref = 1 ===== *ref = 1
*/
// 编译器发现为引用，转换为int * const ref = &a
void func(int & ref)
{
    ref = 2;  // 编译器发现为引用，转换为 *ref = 2
}

int main()
{
   int a = 1;
   int & b = a;  // 转换为指针常量 int * const b = &a
   b = 0;  // 转换为 *b = 0
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   func(b);
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   system("pause");
   return 0;
}
