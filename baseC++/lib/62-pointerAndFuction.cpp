#include <iostream>
#include <vector>

using namespace std;
// 利用指针作为函数的参数，可以修改实参的值
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap02(int * num1, int * num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
   // 值传递
   int a = 0, b = 1;
   swap01(a,b);
   cout << "swap01后，实参的值：" << "a,b: " << a << " " << b << endl;
   // 地址传递
   swap02(&a,&b);
   cout << "swap02后，实参的值：" << "a,b: " << a << " " << b << endl;
   system("pause");
   return 0;
}
