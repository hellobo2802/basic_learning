#include <iostream>
#include <vector>

using namespace std;

// 嵌套循环输出[2][3]二维数组
void out(int arr[][3])
{
 for(int i = 0; i < 2; i++)
   {
    for(int j = 0; j < 3; j++)
        cout << arr[i][j] << " ";
    cout << endl;
   }
}
   

int main()
{
   // 二维数组的定义
   int arr1[2][3]; // 规定行数和列数
   arr1[0][0] = 1;arr1[0][1] = 2;arr1[0][2] = 3;
   arr1[1][0] = 4;arr1[1][1] = 5;arr1[1][2] = 6;
   out(arr1);
   
   int arr2[2][3] = 
   {
    {10,20,30},
    {40,50,60}
   }; // 初始化时每一行使用一个大括号
   out(arr2);

   int arr3[2][3] = {100,200,300,400,500,600}; // 大括号内不再细分，放所有值，编译器根据行列而分
   out(arr3);

   int arr4[][3] = {1000,2000,3000,4000,5000,6000}; // 可以不写行数，但必须写列数
   out(arr4);
   
   system("pause");
   return 0;
}