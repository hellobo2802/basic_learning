#include <iostream>
#include <vector>

using namespace std;

// ��װһ������������ð������ʵ�ֶ������������������
// void bubbleSort(int a[], int len) ���������鴫��, Ҳ�൱�ڵ�ַ���ݣ������޸�ԭʵ��
void bubbleSort(int * a, int len) // �����׵�ַ�����鳤�ȡ�����ָ�루�����׵�ַ�����൱�ڴ������飩
{
  int * firstA = a; // ������ָ�����ʱ������ԭ���飬���ڹ涨ÿ����������ѭ������
  for(int i = 0; i < len - 1; i++)
  {
   a = firstA; // ÿ��ѭ���������һ��Ԫ�ؿ�ʼ
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
   int * b = a+1; // �˴�����ʹ��a++��++a, ��Ϊ������ʹ��a�Լӣ����滹Ҫʹ�õ�ԭ�ȵ�ֵ��
   if(*a > *b)
    {
     int temp = *a;
     *a = *b;
     *b = temp;
    }
    a++; // ָ�����ƣ�����ѭ����һֱ���ƣ���i�����飬��ΪҰָ�룩��������Ҫ�ڵ�13�б���ԭ����
   }
  }
}
int main()
{
   int arr[] = {4,3,6,9,1,2,10,8,7,5};
   // ʹ�õ�ַ����ʵ��ð������
   int len = sizeof(arr) / sizeof(arr[0]);
   bubbleSort(arr, len); // ������ʹ������ʱ��һ����Ҫ��������ĳ���
   for(int i = 0; i < len; i++)
   {
    cout << arr[i] << " ";
   }
   cout << endl;

   system("pause");
   return 0;
}
