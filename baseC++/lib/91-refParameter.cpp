// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
�������������βΣ����Ը���ʵ��ԭֵ������ʹ��ָ����ô����
*/
// ֵ���ݣ�����
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// ��ַ���ݣ�����
void swap02(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ���ô��ݣ�����
void swap03(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
   int a1 = 1, a2 = 0;
   cout << "swap01ֵ���ݽ���ǰa1 = " << a1 << endl;
   cout << "swap01ֵ���ݽ���ǰa2 = " << a2 << endl;
   swap01(a1, a2);
   cout << "swap01ֵ���ݽ�����a1 = " << a1 << endl;  // û�ı䣬˵��ֵ���ݣ��ββ�Ӱ��ʵ��
   cout << "swap01ֵ���ݽ�����a2 = " << a2 << endl;

   int a3 = 1, a4 = 0;
   cout << "swap02��ַ���ݽ���ǰa3 = " << a3 << endl;
   cout << "swap02��ַ���ݽ���ǰa4 = " << a4 << endl;
   swap02(&a3, &a4);
   cout << "swap02��ַ���ݽ�����a3 = " << a3 << endl;  // �ı䣬˵����ַ���ݣ��β�Ӱ��ʵ��
   cout << "swap02��ַ���ݽ�����a4 = " << a4 << endl;

   int a5 = 1, a6 = 0;
   cout << "swap03���ô��ݽ���ǰa5 = " << a5 << endl;
   cout << "swap03���ô��ݽ���ǰa6 = " << a6 << endl;
   swap03(a5, a6);
   cout << "swap03���ô��ݽ�����a5 = " << a5 << endl;  // �ı䣬˵�����ô��ݣ��β�Ӱ��ʵ��
   cout << "swap03���ô��ݽ�����a6 = " << a6 << endl;
   system("pause");
   return 0;
}
