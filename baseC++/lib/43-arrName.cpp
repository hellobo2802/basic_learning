// ���������ã���ȡ���鳤�ȣ���ȡ�����׵�ַ
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   cout << "�����ռ���ڴ��С��" << sizeof(arr) << endl;
   cout << "����Ԫ�ظ�����" << sizeof(arr) / sizeof(arr[0]) << endl;
   cout << "������׵�ַ��" << (int)arr << endl; // int ��ʮ�����ƻ�Ϊʮ����
   cout << "����ĵ�һ��Ԫ�ص�ַ��" << (int)&arr[0] << endl; //&ȡԪ�صĵ�ַ
   // �����������Ա���ֵ
   // arr = 100;
   system("pause");
   return 0;
}