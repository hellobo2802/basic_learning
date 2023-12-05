#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // 打印 10 * 10的 ***

   // 外层循环一次，内存循环一轮
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