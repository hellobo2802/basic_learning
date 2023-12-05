#include <iostream>
#include <vector>

using namespace std;

// 利用指针访问数组中的元素
int main()
{
   int a[] = {10,0,1,2,3,4,5,6,7,8,9};
   cout << "常用方法查看数组的第一个元素：" << a[0] << endl;
   cout << "指针方法遍历数组的每一个值：" << endl;
   // int * p = &a[0]; // 正确
   /* 为什么以下的方式是错误的？
   int * p = &a;
   a本来就是数组的首地址！！！，不需要再&！！
   */
   int * p = a;
   for(int i = 0;i < sizeof(a) / sizeof(a[0]);i++)
   {
    cout << *p << " ";
    p++; //  指针偏移
   }
   cout << endl;
   system("pause");
   return 0;
}
