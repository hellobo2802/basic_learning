#include <iostream>
#include <vector>

using namespace std;
/*
野指针：是一种错误，在程序中尽量避免
野指针：指针变量指向非法的内存空间
*/
int main()
{
   int * p = (int *)0x1100; // 0x1100十六进制，(int *)强制转换为指针类型
   cout << *p << endl;
   system("pause");
   return 0;
}
// 空指针和野指针都不是我们申请的空间，因此不要访问