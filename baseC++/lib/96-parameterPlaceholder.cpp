// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
函数占位符
函数列表中只写数据类型，不写形参变量名；
实例化时，占位符必须要被传值；
占位参数还可以有默认值
*/
void func(int a, int = 10)  // 参数2为占位符
{
    cout << "a = " << a << endl;
}
int main()
{
   func(1, 2);
   system("pause");
   return 0;
}
