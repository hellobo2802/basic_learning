#include <iostream>
#include <vector>

using namespace std;
/*
�ṹ����Ϊ������ֵ����(.)����ַ����(->)
*/
struct fpf
{
    string name;
};
// ֵ����
void printLover(fpf f)
{
   f.name = "fpf";
   cout << f.name << "�İ��������ٲ�" << endl;
}
void changeName(fpf * f)
{
   // fΪָ�룺ʹ��->����
   f->name = "���ٲ�";
   cout << "���ֱ��Ϊ" << f -> name << endl;
}
int main()
{
   fpf f = {"���ʷ�"};
   printLover(f);
   cout << f.name << "�İ��������ٲ�" << endl; // ͬ��ֵ���ݲ��ı�ʵ��ֵ

   changeName(&f);
   system("pause");
   return 0;
}
