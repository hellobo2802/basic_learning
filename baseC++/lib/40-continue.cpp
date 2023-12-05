// break后续都不执行，跳出循环，continue跳过中间的部分不执行，不跳出循环
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // continue
   for(int i = 0; i < 101; i++)
   {
    if(i % 2 == 0)
        continue; //结束本次循环，后续不执行；转为下一次循环
    cout << i << endl;
   }
   system("pause");
   return 0;
}