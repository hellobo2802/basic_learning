// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
�������ã����������βΣ���ֹ��������൱�ڳ���ָ��+ָ�볣����ֵ��ָ�򶼲������޸�
*/

void show(const int & b)  // ��������
{
    // b = 1;  // ������ʾ��ֻ���βθ�ֵ
    cout << "b = " << b << endl;
}

int main()
{
   int a = 0;
   // int & b = 0;   // ����0��һ�������������Ǹ��������������������
   // ����const��ȷ���൱�ڣ�int temp = 0; int & b = temp;
   const int & b =0;  // ��Ϊֻ��
   
   show(a);
   system("pause");
   return 0;
}
