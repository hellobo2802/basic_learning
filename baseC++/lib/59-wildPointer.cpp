#include <iostream>
#include <vector>

using namespace std;
/*
Ұָ�룺��һ�ִ����ڳ����о�������
Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�
*/
int main()
{
   int * p = (int *)0x1100; // 0x1100ʮ�����ƣ�(int *)ǿ��ת��Ϊָ������
   cout << *p << endl;
   system("pause");
   return 0;
}
// ��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ����