#include <iostream>
#include <vector>

using namespace std;

int main()
{
   /*
   ��ά�������������ã��鿴ռ���ڴ��С����ȡ�׵�ַ
   ���ά����ĺ���������
   */
   int arr[2][3] = {{1,2,3},{4,5,6}};
   cout << sizeof(arr) << endl;
   cout << sizeof(arr[0]) << endl;
   cout << sizeof(arr[0][0]) << endl;
   
   // ��ȡ����������
   int rowNum = sizeof(arr) / sizeof(arr[0]); // ����������ռ���ڴ� / ÿһ��ռ���ڴ�
   int colNum = sizeof(arr[0]) / sizeof(arr[0][0]); // ������ÿһ��ռ���ڴ� / ÿһ��ռ���ڴ�
   cout << "������" << rowNum << endl;
   cout << "������" << colNum << endl;

   // ��ά������׵�ַ
   cout << "��ά�����׵�ַ��" << (int)arr << endl;
   cout << "��һ��Ԫ���׵�ַ��" << (int)&arr[0][0] << endl;
   cout << "��һ���׵�ַ��" << (int)arr[0] << endl; // �൱��һ��һά����
   cout << "��һ����Ԫ���׵�ַ��" << (int)&arr[0][0] << endl; // ����Ԫ�ص�ַ��Ҫ & 
   cout << "�ڶ����׵�ַ��" << (int)arr[1] << endl; // �൱��һ��һά����
   cout << "�ڶ�����Ԫ���׵�ַ��" << (int)&arr[1][0] << endl;
   system("pause");
   return 0;
}
