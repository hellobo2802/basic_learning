// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
常量引用：用来修饰形参，防止误操作。相当于常量指针+指针常量：值和指向都不可以修改
*/

void show(const int & b)  // 常量引用
{
    // b = 1;  // 报错：显示向只读形参赋值
    cout << "b = " << b << endl;
}

int main()
{
   int a = 0;
   // int & b = 0;   // 报错：0是一个常量，必须是个变量。给变量起别名！
   // 加入const正确，相当于：int temp = 0; int & b = temp;
   const int & b =0;  // 变为只读
   
   show(a);
   system("pause");
   return 0;
}
