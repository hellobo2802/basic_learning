#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // ������λͬѧ�ĳɼ��ܺ�
   int score[3][3] = {{100,100,100},{90,50,100},{60,70,80}};
   for(int i = 0; i < 3; i++)
   {
    for(int j = 0; j < 3; j++)
    {
        cout << score[i][j] << " ";
    }
    cout << endl;
   }
   // ʹ��һά����洢����
   string name[3] = {"����", "����", "����"};
   for(int i = 0; i < 3; i++)
   {
    int sc = 0;
    for(int j = 0; j < 3; j++)
    {
        sc += score[i][j];
    }
    cout << name[i] << "���ܳɼ���" << sc << endl;
   }

   system("pause");
   return 0;
}
