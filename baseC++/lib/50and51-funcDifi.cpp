#include <iostream>
#include <vector>

using namespace std;
// ���������������
/*
�����﷨
����ֵ���� ���������β�1���� �β�1���ƣ��β�2���� �β�12���ƣ�
{
    �����壻
    renturn ���ʽ��
}
*/
int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
   int num1,num2;
   cout << "����������������������ܺ�Ŷ��(�Կո�������)" << endl;
   cin >> num1 >> num2;
   cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
   system("pause");
   return 0;
}
