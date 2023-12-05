#include <iostream>
#include <vector>
#include <ctime>
#include<iomanip>

using namespace std;
/*
���һ��Ӣ�۵Ľṹ�壺������������䡢�Ա𣻴����ṹ�����飬���5��Ӣ�ۣ�
ͨ��ð�����򣬽������е�Ӣ�۰�������������������������
*/
struct Hero
{
    string name;
    int age;
    bool gender;
};
// ��ʼ���ṹ��һ����
void allocateSpace(Hero hero[], int len)
{
    string names[] = {"���ʷ�","���ٲ�","����","����","����"};
    string genders = "11010"; // string���ͣ�ȡ���е�����Ҳ���ַ�����
    for(int i = 0; i < len; i++)
    {
        hero[i].name = names[i];
        /*
        cout << "string�е�һλ����Ϊ��" << typeid(genders[i]).name() << endl; // c��char(�ַ�����)����1��������ΪASCII��49
        hero[i].gender = genders[i];
        cout << hero[i].gender << endl; // �����ʲô��Ϊ�Σ�
        // answer: �����Զ��1��ʹ���ַ�����λȡֵ����ֵ����Ϊ�ַ������丳ֵ��int/boolʱ�������Ӧ��ASCII��/1��
        // ��ô�����ȷȡ���ַ�������������أ�
        hero[i].gender = genders[i] - '0'; // תΪ��Ӧ������
        */
        hero[i].gender = genders[i] - '0'; // תΪ��Ӧ������
        int random = rand()%16 + 16; // rand()����0-������������������
        hero[i].age = random;
    }
}
// ?����ð������
void bubbbleSort(Hero * p, int len) // дconst�Ļ����Ͳ�����Ķ��ˣ�
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i -1; j++)
        {
            if(p[j].age > p[j+1].age)
            {
                Hero temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }            
        }
    }
}
// �ṹ���������
void printInfo(const Hero * p, int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << "\tage: " << p[i].age << " \tname: " << p[i].name << "\tgender: ";
        if (p[i].gender == 1)
            cout << "��" << endl;
        else
            cout << "Ů" << endl;
    }
}
int main()
{
   srand((unsigned int)time(NULL)); // ����ϵͳʱ���������������
   Hero hero[5];
   int len = sizeof(hero) / sizeof(hero[0]);

   allocateSpace(hero, len);
   
   cout << "����ǰ��" << endl;
   printInfo(hero, len);

   bubbbleSort(hero, len);

   cout << "�����" << endl;
   printInfo(hero, len);

   system("pause");
   return 0;
}
