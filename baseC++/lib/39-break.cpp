#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // break �÷��� ����switch��case; ����ѭ��������Ƕ��ѭ�������ڲ�ѭ��
  cout << "��ѡ����Ϸ�Ѷȣ�1:��ͨ��2���еȣ�3������" << endl;
  int select = 0;
  cin >> select;
  switch(select)
  {
    case 1: 
        cout << "��ͨ�Ѷ�" << endl;
        break; // break�˳�switch
    case 2: 
        cout << "�е��Ѷ�" << endl;
        break;
    case 3: 
        cout << "�����Ѷ�" << endl;
        break;
    default:
        cout << "Ĭ��������Ѷ�" << endl;
        break;
  }

  for(int i = 0; i < 10; i++)
  {
    if(i == 6)
        break; // break ����ѭ��
    cout << i << endl;
  }

  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
        if(j == 5)
            break;
        cout << "* ";
    }
    cout << endl;
  }
   system("pause");
   return 0;
}
