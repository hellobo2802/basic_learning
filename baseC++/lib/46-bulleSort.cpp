#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // 实现冒泡排序
   /* 
   思想：
   比较相邻的元素，若第一个比第二个大，则交换。
   对每一对相邻的元素执行相同的工作，找到最大值。==冒泡：每轮都找到最大值。
   重复以上步骤，每次比较次数都-1，直至不需要比较
   关键点：
   排序的总轮数：元素个数 - 1；
   每轮对比次数：元素个数 - 当前轮数 - 1。
   */
   int arr[] = {4,2,8,0,5,7,1,3,9};
   cout << "排序前：" << endl;
   int len = sizeof(arr) / sizeof(arr[0]);
   for(int i = 0; i < len; i++)
   {
    cout << arr[i] << " ";
   }cout << endl;
   
   // 总共排序轮数：元素个数 - 1
   for(int i = 0; i < len - 1; i++)
   {
    // 内部对比次数：元素个数 - 当前轮数 - 1
    for(int j = 0; j < len - i - 1; j++)
    {
        // 交换
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }
   cout << "排序后：" << endl;
   for(int i = 0; i < len; i++)
   {
    cout << arr[i] << " ";
   }cout << endl;

   system("pause");
   return 0;
}
