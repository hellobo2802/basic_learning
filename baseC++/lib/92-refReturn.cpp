// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
引用做返回值：不要使用引用操作已经释放的局部变量地址、引用的返回值可以作为左值，被赋值。
*/

int & test01()
{
    int a = 10;  // 局部变量存放在栈区
    int & b = a;
    return b;
}

int & test02()
{
    static int a = 20;  // 将a变为静态变量，存放在全局区，程序结束后释放。想一下static的作用：延长全局变量周期。想一下与全局变量的区别：小于全局变量，不必要写在最前面 
    return a;
}

int main()
{
   int & c = test01();
   cout << c << endl;  // 不要在外面使用别名操作已经释放的内存

   int & b = test02();
   cout << b << endl;
   
   test02() = 1000;  // 引用可以作为左值，被重新赋值
   cout << b << endl;

   system("pause");
   return 0;
}
