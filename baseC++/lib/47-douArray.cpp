#include <iostream>
#include <vector>

using namespace std;

// Ƕ��ѭ�����[2][3]��ά����
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
   // ��ά����Ķ���
   int arr1[2][3]; // �涨����������
   arr1[0][0] = 1;arr1[0][1] = 2;arr1[0][2] = 3;
   arr1[1][0] = 4;arr1[1][1] = 5;arr1[1][2] = 6;
   out(arr1);
   
   int arr2[2][3] = 
   {
    {10,20,30},
    {40,50,60}
   }; // ��ʼ��ʱÿһ��ʹ��һ��������
   out(arr2);

   int arr3[2][3] = {100,200,300,400,500,600}; // �������ڲ���ϸ�֣�������ֵ���������������ж���
   out(arr3);

   int arr4[][3] = {1000,2000,3000,4000,5000,6000}; // ���Բ�д������������д����
   out(arr4);
   
   system("pause");
   return 0;
}