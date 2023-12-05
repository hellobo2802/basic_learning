#include <iostream>
#include <vector>

using namespace std;

// 相加函数
int add(int num1, int num2) // 形参
{
    return num1 + num2;
}

int main()
{
   int a = 1, b = 1;
   // 函数调用
   int sum = add(a, b); // 实参
   cout << "a + b = " << sum << endl;
   system("pause");
   return 0;
}
