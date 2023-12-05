#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // break 用法： 跳出switch的case; 跳出循环；跳出嵌套循环的最内层循环
  cout << "请选择游戏难度：1:普通；2：中等；3：困难" << endl;
  int select = 0;
  cin >> select;
  switch(select)
  {
    case 1: 
        cout << "普通难度" << endl;
        break; // break退出switch
    case 2: 
        cout << "中等难度" << endl;
        break;
    case 3: 
        cout << "困难难度" << endl;
        break;
    default:
        cout << "默认是随机难度" << endl;
        break;
  }

  for(int i = 0; i < 10; i++)
  {
    if(i == 6)
        break; // break 跳出循环
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
