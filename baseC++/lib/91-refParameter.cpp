// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
引用做函数的形参：可以更改实参原值，不必使用指针那么复杂
*/
// 值传递，交换
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递：交换
void swap02(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递：交换
void swap03(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
   int a1 = 1, a2 = 0;
   cout << "swap01值传递交换前a1 = " << a1 << endl;
   cout << "swap01值传递交换前a2 = " << a2 << endl;
   swap01(a1, a2);
   cout << "swap01值传递交换后a1 = " << a1 << endl;  // 没改变，说明值传递，形参不影响实参
   cout << "swap01值传递交换后a2 = " << a2 << endl;

   int a3 = 1, a4 = 0;
   cout << "swap02地址传递交换前a3 = " << a3 << endl;
   cout << "swap02地址传递交换前a4 = " << a4 << endl;
   swap02(&a3, &a4);
   cout << "swap02地址传递交换后a3 = " << a3 << endl;  // 改变，说明地址传递，形参影响实参
   cout << "swap02地址传递交换后a4 = " << a4 << endl;

   int a5 = 1, a6 = 0;
   cout << "swap03引用传递交换前a5 = " << a5 << endl;
   cout << "swap03引用传递交换前a6 = " << a6 << endl;
   swap03(a5, a6);
   cout << "swap03引用传递交换后a5 = " << a5 << endl;  // 改变，说明引用传递，形参影响实参
   cout << "swap03引用传递交换后a6 = " << a6 << endl;
   system("pause");
   return 0;
}
