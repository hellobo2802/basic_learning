#include <iostream>
#include <vector>

using namespace std;

/*
ֵ���ݣ��������βεı仯��Ӱ��ʵ�Σ�
*/
// 
void swap(int num1, int num2) // �¿���num1,num2
{
    cout << "swap����ǰ��num1=" << num1 << endl;
    cout << "swap����ǰ��num2=" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "swap�������num1=" << num1 << endl;
    cout << "swap�������num2=" << num2 << endl;
}

int main()
{
   int a = 10, b = 20;
   cout << "main����ǰ��a=" << a << endl;
   cout << "main����ǰ��b=" << b << endl;

   /*
   ֵ���ݣ����ı�ʵ�Ρ�
   */
   swap(a, b);
   cout << "main�������a=" << a << endl;
   cout << "main�������b=" << b << endl;
   system("pause");
   return 0;
}
