#include <iostream>
#include "swap.h" // ˫���ű�ʾ�Զ����ͷ�ļ�

using namespace std;

// Դ�ļ��ж��庯��
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
