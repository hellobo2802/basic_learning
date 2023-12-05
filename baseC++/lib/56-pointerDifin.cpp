#include <iostream>
#include <vector>

using namespace std;
// 指针就是地址

int main()
{
   int a = 1;
   // 指针定义语法：数据类型 * 指针变量名
   int * p;
   p = &a; // &a 获取a的地址
   cout << "a的地址：" << (int)&a << endl; 
   cout << "p：" << (int)p << endl; 

   // 通过指针获取地址：解引用方式 *p
   cout << "a = " << *p << endl;
   system("pause");
   return 0;
}
