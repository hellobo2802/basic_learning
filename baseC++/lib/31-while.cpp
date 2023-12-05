#include<iostream>
using namespace std;

int main()
{
    // while
    // 打印0-9
    int num1 = 0;

    // 语法
    /*
   while(条件){执行语句;条件改变;}
    */

   while(num1 < 10) //出口
   {
      cout << num1 << endl;
      num1++;
   }
    system("pause");
    return 0;
}