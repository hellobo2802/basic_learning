#include <iostream>
#include <vector>

using namespace std;

// 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
// void bubbleSort(int a[], int len) 将整个数组传入, 也相当于地址传递，可以修改原实参
void bubbleSort(int * a, int len) // 数组首地址、数组长度。传入指针（数组首地址，就相当于传入数组）
{
  int * firstA = a; // 对数组指针操作时，保留原数组，用于规定每次在数组内循环操作
  for(int i = 0; i < len - 1; i++)
  {
   a = firstA; // 每次循环从数组第一个元素开始
   for(int j = 0; j < len - i - 1; j++)
   {
    /*
    if(a[j] > a[j+1])
    {
    int temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
    }
    */
   int * b = a+1; // 此处不能使用a++或++a, 因为这样会使得a自加（下面还要使用到原先的值）
   if(*a > *b)
    {
     int temp = *a;
     *a = *b;
     *b = temp;
    }
    a++; // 指针下移，不断循环会一直下移（超i过数组，变为野指针），所以需要在第13行保留原数组
   }
  }
}
int main()
{
   int arr[] = {4,3,6,9,1,2,10,8,7,5};
   // 使用地址传递实现冒泡排序
   int len = sizeof(arr) / sizeof(arr[0]);
   bubbleSort(arr, len); // 函数中使用数组时，一般需要传入数组的长度
   for(int i = 0; i < len; i++)
   {
    cout << arr[i] << " ";
   }
   cout << endl;

   system("pause");
   return 0;
}
