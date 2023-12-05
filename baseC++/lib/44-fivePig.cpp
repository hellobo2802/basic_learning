#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // 5只小猪称体重
   int arrPig[5] = {600, 350, 200, 400, 250};
   int len = sizeof(arrPig) / sizeof(arrPig[0]); // 计算数组长度
   int max = arrPig[0]; // 默认第一个最大；写在循环里面每一次都会被重置
   for(int i = 1; i < len; i++) // 注意从第二个开始比
   {
      if(arrPig[i] > max)
      {
         max = arrPig[i];
      }
   }
   cout << "最重的小猪：" << max << "斤！" << endl;
   system("pause");
   return 0;
}
