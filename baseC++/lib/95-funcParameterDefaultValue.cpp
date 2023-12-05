// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;
int add(int a, int b, int c);  // 声明中无默认值，实现时有
/*
语法: 返回值类型  函数名（参数=默认值）
易错点：
函数实现时，一旦某位置有默认值，从左到右（其后）都必须有默认值；
函数声明中写了默认值，函数定义时就不能再写默认值，否则会造成二义性。（声明和实现只能有一个有默认参数）

*/
int add(int a, int b = 20, int c = 0)
{
    return a + b + c;
}

int main()
{
   cout << add(10, 10) << endl;  // 传递的值优先级更大
   system("pause");
   return 0;
}
