#include <iostream>
#include <vector>

using namespace std;

/*
��������: ��дmian, ����ǰ��֪����max����
�﷨����������ĵ�һ�У������������塣
*/
int max(int a, int b);

// ���������ж�Σ����Ƕ���ֻ����һ�Σ�
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);

int main()
{
   int a = 1, b = 2;
   cout << "max = " << max(a,b) << endl;
   system("pause");
   return 0;
}
int max(int a, int b)
{
    return a > b ? a : b; // �Ƚ����ߣ������ش���
}