#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // ʵ��ð������
   /* 
   ˼�룺
   �Ƚ����ڵ�Ԫ�أ�����һ���ȵڶ������򽻻���
   ��ÿһ�����ڵ�Ԫ��ִ����ͬ�Ĺ������ҵ����ֵ��==ð�ݣ�ÿ�ֶ��ҵ����ֵ��
   �ظ����ϲ��裬ÿ�αȽϴ�����-1��ֱ������Ҫ�Ƚ�
   �ؼ��㣺
   �������������Ԫ�ظ��� - 1��
   ÿ�ֶԱȴ�����Ԫ�ظ��� - ��ǰ���� - 1��
   */
   int arr[] = {4,2,8,0,5,7,1,3,9};
   cout << "����ǰ��" << endl;
   int len = sizeof(arr) / sizeof(arr[0]);
   for(int i = 0; i < len; i++)
   {
    cout << arr[i] << " ";
   }cout << endl;
   
   // �ܹ�����������Ԫ�ظ��� - 1
   for(int i = 0; i < len - 1; i++)
   {
    // �ڲ��Աȴ�����Ԫ�ظ��� - ��ǰ���� - 1
    for(int j = 0; j < len - i - 1; j++)
    {
        // ����
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }
   cout << "�����" << endl;
   for(int i = 0; i < len; i++)
   {
    cout << arr[i] << " ";
   }cout << endl;

   system("pause");
   return 0;
}
