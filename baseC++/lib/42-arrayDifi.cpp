// ����ֵ������������ڴ�ռ䣻�����ڵ�Ԫ�����Ͷ�һ��
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // ������������ַ�ʽ��Ҫô�г��ȣ�Ҫô�г�ʼ��������Ҫôȫ���У�

   // int arr1[���鳤��]
   int arr1[5];
   for(int i = 0; i < 5; i++)
   {
    arr1[i] = i;
   }
   for(int i = 0; i < 5; i++)
   {
    cout << arr1[i] << " ";
   }

   // int arr1[���鳤��] = {10, 20, ...}
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
