#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // 计算三位同学的成绩总和
   int score[3][3] = {{100,100,100},{90,50,100},{60,70,80}};
   for(int i = 0; i < 3; i++)
   {
    for(int j = 0; j < 3; j++)
    {
        cout << score[i][j] << " ";
    }
    cout << endl;
   }
   // 使用一维数组存储姓名
   string name[3] = {"张三", "李四", "王五"};
   for(int i = 0; i < 3; i++)
   {
    int sc = 0;
    for(int j = 0; j < 3; j++)
    {
        sc += score[i][j];
    }
    cout << name[i] << "的总成绩：" << sc << endl;
   }

   system("pause");
   return 0;
}
