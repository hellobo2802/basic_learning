#include <iostream>
#include <vector>

using namespace std;
// 两个整型数据相加
/*
函数语法
返回值类型 函数名（形参1类型 形参1名称，形参2类型 形参12名称）
{
    函数体；
    renturn 表达式。
}
*/
int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
   int num1,num2;
   cout << "输入两个整数，帮你计算总和哦！(以空格间隔两数)" << endl;
   cin >> num1 >> num2;
   cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
   system("pause");
   return 0;
}
