// 数组名作用：获取数组长度；获取数组首地址
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   cout << "数组的占用内存大小：" << sizeof(arr) << endl;
   cout << "数组元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
   cout << "数组的首地址：" << (int)arr << endl; // int 将十六进制换为十进制
   cout << "数组的第一个元素地址：" << (int)&arr[0] << endl; //&取元素的地址
   // 数组名不可以被赋值
   // arr = 100;
   system("pause");
   return 0;
}