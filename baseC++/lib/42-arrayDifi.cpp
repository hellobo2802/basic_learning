// 数组值存放在连续的内存空间；数组内的元素类型都一样
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // 定义数组的三种方式，要么有长度，要么有初始化个数，要么全部有！

   // int arr1[数组长度]
   int arr1[5];
   for(int i = 0; i < 5; i++)
   {
    arr1[i] = i;
   }
   for(int i = 0; i < 5; i++)
   {
    cout << arr1[i] << " ";
   }

   // int arr1[数组长度] = {10, 20, ...}
   int arr2[5] = {10, 20, 30, 40, 50};
   for(int i = 0; i < 5; i++)
   {
    cout << arr2[i] << " ";
   }
   
   // int arr1[] = {100, 200, ...}
   int arr3[] = {100, 200, 300, 400, 500};
   for(int i = 0; i < 5; i++)
   {
    cout << arr3[i] << " ";
   }

   system("pause");
   return 0;
}
