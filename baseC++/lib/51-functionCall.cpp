#include <iostream>
#include <vector>

using namespace std;

// ��Ӻ���
int add(int num1, int num2) // �β�
{
    return num1 + num2;
}

int main()
{
   int a = 1, b = 1;
   // ��������
   int sum = add(a, b); // ʵ��
   cout << "a + b = " << sum << endl;
   system("pause");
   return 0;
}
