#include <iostream>
#include <vector>

using namespace std;
/*
空指针：指针变量指向内存中编号为0的空间
用途：初始化指针变量
注意：空指针指向的内存空间是不可以访问的
*/

int main()
{
   int * p = NULL; // 必须是NULL
   
   *p = 100; // 空指针不可以访问

   system("pause");
   return 0;
}
