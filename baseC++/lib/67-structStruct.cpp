#include <iostream>
#include <vector>

using namespace std;

/*
�ṹ��Ƕ�׽ṹ��
*/
struct lsb
{
    string name;
};
struct fpf
{
    string name;
    lsb trueLove;
};
int main()
{
   lsb l = {"���ٲ�"};
   fpf f = {"���ʷ�",l};
   cout << f.name << "���氮��" << f.trueLove.name << "! " << endl;
   system("pause");
   return 0;
}
