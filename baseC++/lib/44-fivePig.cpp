#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // 5ֻС�������
   int arrPig[5] = {600, 350, 200, 400, 250};
   int len = sizeof(arrPig) / sizeof(arrPig[0]); // �������鳤��
   int max = arrPig[0]; // Ĭ�ϵ�һ�����д��ѭ������ÿһ�ζ��ᱻ����
   for(int i = 1; i < len; i++) // ע��ӵڶ�����ʼ��
   {
      if(arrPig[i] > max)
      {
         max = arrPig[i];
      }
   }
   cout << "���ص�С��" << max << "�" << endl;
   system("pause");
   return 0;
}
