#include <iostream>
#include <vector>

using namespace std;

int main()
{
      // ����Ԫ������
   int nums[] = {4, 1, 3, 1, 1, 2, 5};
   int len2 = sizeof(nums) / sizeof(nums[0]);
   int temp,j = len2 - 1; //temp���ڽ�����j�Ӻ���ǰ
   {
      for(int i = 0; i < len2 / 2; i++) // ʹ��while�Ͳ��ÿ��ǻ����ĸ�������������while(start < end����)
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
