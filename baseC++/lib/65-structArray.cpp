#include <iostream>
#include <vector>

using namespace std;
/*
�ṹ�����飺�����з���ṹ��
�﷨��
struct �ṹ���� ������[Ԫ�ظ���] = {{��Ա�б��ʼֵ},{}...}

*/
struct Student
{
    string name;
    double score;
};
int main()
{
   // �����ṹ������
   Student arr[] = {{"���ʷ�",100},{"���ٲ�",100}};
   cout << arr[0].name << endl;
   cout << arr[1].name << endl;
   system("pause");
   return 0;
}
