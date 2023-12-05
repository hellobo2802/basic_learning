#include <iostream>
#include <vector>

using namespace std;

int main()
{
   /*
   二维数组数组名作用，查看占用内存大小；获取首地址
   求二维数组的函数和列数
   */
   int arr[2][3] = {{1,2,3},{4,5,6}};
   cout << sizeof(arr) << endl;
   cout << sizeof(arr[0]) << endl;
   cout << sizeof(arr[0][0]) << endl;
   
   // 获取行数和列数
   int rowNum = sizeof(arr) / sizeof(arr[0]); // 行数：数组占用内存 / 每一行占用内存
   int colNum = sizeof(arr[0]) / sizeof(arr[0][0]); // 列数：每一行占用内存 / 每一个占用内存
   cout << "行数：" << rowNum << endl;
   cout << "列数：" << colNum << endl;

   // 二维数组的首地址
   cout << "二维数组首地址：" << (int)arr << endl;
   cout << "第一个元素首地址：" << (int)&arr[0][0] << endl;
   cout << "第一行首地址：" << (int)arr[0] << endl; // 相当于一个一维数组
   cout << "第一行首元素首地址：" << (int)&arr[0][0] << endl; // 具体元素地址需要 & 
   cout << "第二行首地址：" << (int)arr[1] << endl; // 相当于一个一维数组
   cout << "第二行首元素首地址：" << (int)&arr[1][0] << endl;
   system("pause");
   return 0;
}
