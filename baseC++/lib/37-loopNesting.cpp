#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // ��ӡ 10 * 10�� ***

   // ���ѭ��һ�Σ��ڴ�ѭ��һ��
   for(int i = 0; i < 10; i++)
   {
       for(int j = 0; j < 10; j++)
       {
        if(j != 9)
         cout << "* ";
        else
         cout << "*";
       }
      cout << endl; 
   }
   system("pause");
   return 0;
}