// break��������ִ�У�����ѭ����continue�����м�Ĳ��ֲ�ִ�У�������ѭ��
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // continue
   for(int i = 0; i < 101; i++)
   {
    if(i % 2 == 0)
        continue; //��������ѭ����������ִ�У�תΪ��һ��ѭ��
    cout << i << endl;
   }
   system("pause");
   return 0;
}