#include <iostream>
#include <vector>

using namespace std;
// ����ָ����Ϊ�����Ĳ����������޸�ʵ�ε�ֵ
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
   // ֵ����
   int a = 0, b = 1;
   swap01(a,b);
   cout << "swap01��ʵ�ε�ֵ��" << "a,b: " << a << " " << b << endl;
   // ��ַ����
   swap02(&a,&b);
   cout << "swap02��ʵ�ε�ֵ��" << "a,b: " << a << " " << b << endl;
   system("pause");
   return 0;
}
