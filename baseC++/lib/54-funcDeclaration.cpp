#include <iostream>
#include <vector>

using namespace std;

/*
函数声明: 先写mian, 但提前告知存在max函数
语法：函数定义的第一行：不包含函数体。
*/
int max(int a, int b);

// 声明可以有多次，但是定义只能有一次！
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);

int main()
{
   int a = 1, b = 2;
   cout << "max = " << max(a,b) << endl;
   system("pause");
   return 0;
}
int max(int a, int b)
{
    return a > b ? a : b; // 比较两者，并返回大数
}