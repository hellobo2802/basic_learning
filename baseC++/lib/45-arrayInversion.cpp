#include <iostream>
#include <vector>

using namespace std;

int main()
{
      // 数组元素逆置
   int nums[] = {4, 1, 3, 1, 1, 2, 5};
   int len2 = sizeof(nums) / sizeof(nums[0]);
   int temp,j = len2 - 1; //temp用于交换，j从后往前
   {
      for(int i = 0; i < len2 / 2; i++) // 使用while就不用考虑互换的个数，仅仅满足while(start < end即可)
      {
         temp = nums[i];
         nums[i] = nums[j];
         nums[j] = temp;

         j--;
      }
   }
   for(int k = 0; k < len2; k++)
      cout << nums[k] << " ";
   cout << endl;
   system("pause");
   return 0;
}
