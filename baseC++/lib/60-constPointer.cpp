#include <iostream>
#include <vector>

using namespace std;
/*
const修饰指针的三种情况：常量指针、指针常量、均有
常量指针：const 修饰指针
指针常量：const 修饰常量、
const 既修饰指针，又修饰常量
*/

int main()
{
   // const修饰指针：常量指针
   // 常量指针特点：指针指向可以修改，指针指向的值不可以修改
   int a = 1, b = 0;
   const int * p1 = &a;
   // *p1 = 2; // 错误
   // p1 = &b; // 正确
   // const修饰常量，指针常量
   // 指针常量特点：指针指向不可以修改，指针的指向的值可以修改
   int * const p2 = &a;
   // p2 = &b; // 错误
   // *p2 = 10; // 正确
   // const既修饰常量，又修饰指针
   // 特点：指针的指向和指针指向的值都不可以修改
   const int * const p3 = &a;
   // p3 = &b; // 错误
   // *p3 = 10; // 错误
 
   system("pause");
   return 0;
}
