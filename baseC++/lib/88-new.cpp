// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
开辟堆区数据
语法：new 数据类型()
释放使用delete
利用new创建的数据，会返回该数据对应的类型的指针
*/

int * func()
{
    int * p = new int();
    *p = 20;
    return p;
}

void test()
{
    int * p1 = func();
    cout << "堆区数据new p的值为：" << *p1 << endl;  // 20
    delete p1;
    cout << "堆区数据new p的值为：" << *p1 << endl;  // 乱码
}

void test2()
{
    int * p2 = new int[10];  // [10]表示数组长度
    for(int i = 0; i < 10 ; i++)
    {
        p2[i] = i + 1;  // 数组指针可以直接按照数组操作
    }
    for(int i = 0; i < 10 ; i++)
    {
        cout << p2[i] << endl;
    }
    delete [] p2;  // 释放堆区数组。delete [] 数组名 
}
int main()
{
   test();
   test2();
   system("pause");
   return 0;
}

