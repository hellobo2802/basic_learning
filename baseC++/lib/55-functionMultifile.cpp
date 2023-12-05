#include <iostream>
#include "swap.h" // 双引号表示自定义的头文件

using namespace std;

// 源文件中定义函数
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
