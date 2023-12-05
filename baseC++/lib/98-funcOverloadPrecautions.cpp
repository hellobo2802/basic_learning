// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
函数重载注意事项：
引用作为重载条件: const加与不加是两种重载方式
函数重载遇到默认参数，调用时会出现二义性。重载时，尽量不要设置默认参数
*/
void func(int &a)
{
    cout << "func(int &a)" << endl;
}

void func(const int &a)  // const之后，参数类型不同，属于重载
{
    cout << "func(const int &a)" << endl;
}

void func2(int a)
{
    cout << "func2(int a)" << endl;
}

void func2(int a, int b = 1)
{
    cout << "func2(int a, int b = 1)" << endl;
}



int main()
{
   int a = 12;
   func(a);
   func(10);  // const int & a = 10: 合法语法

   //  func2(1);  // 报错：出现二义性，出错。
   system("pause");
   return 0;
}
