#include <iostream>
#include <vector>

using namespace std;
/*
函数的常见样式：
无参无返、无参有返、有参无返、有参有返
*/
void test1()
{
    cout << "无参无返的测试案例" << endl;
}
void test2(int a)
{
    cout << "有参无返的测试案例" << endl;
    cout << "形参a=" << a << endl;
}
int test3()
{
    cout << "无参有返的测试案例" << endl;
    return 1;
}
int test4(int b)
{
    cout << "有参有返的测试案例" << endl;
    cout << "形参b=" << b << endl;
    return 2;
}

int main()
{
   test1();
   int a = 0;test2(a);
   cout << "无参有返的返回值：" << test3() << endl;
   int b =1;
   cout << "有参有返的返回值：" << test4(b) << endl;
   system("pause");
   return 0;
}
