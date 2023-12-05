#include <iostream>
#include <vector>

using namespace std;

/*
值传递：函数里形参的变化不影响实参！
*/
// 
void swap(int num1, int num2) // 新开辟num1,num2
{
    cout << "swap交换前的num1=" << num1 << endl;
    cout << "swap交换前的num2=" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "swap交换后的num1=" << num1 << endl;
    cout << "swap交换后的num2=" << num2 << endl;
}

int main()
{
   int a = 10, b = 20;
   cout << "main交换前的a=" << a << endl;
   cout << "main交换前的b=" << b << endl;

   /*
   值传递，不改变实参。
   */
   swap(a, b);
   cout << "main交换后的a=" << a << endl;
   cout << "main交换后的b=" << b << endl;
   system("pause");
   return 0;
}
