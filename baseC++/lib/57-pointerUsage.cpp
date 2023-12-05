#include <iostream>
#include <vector>

using namespace std;
// 指针占用内存：32位系统下占用4位；64位系统下占用8位
int main()
{
   // 创建指针
   int a = 1;
   int * p = &a;
   cout << "指针占用内存：" << sizeof(int *) << endl;
   cout << "指针占用内存：" << sizeof(double *) << endl;
   cout << "指针占用内存：" << sizeof(p) << endl;
   system("pause");
   return 0;
}
