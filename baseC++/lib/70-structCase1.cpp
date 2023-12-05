#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

/*
3����ʦ��ÿ����ʦ��5λѧ�����������£����ѧ������ʦ�Ľṹ�壬��ʦ�ṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա��ѧ���ĳ�Ա��������������Է�����
����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ�����մ�ӡ��ʦ�����ݺ�ѧ�������ݡ�
*/
struct Student
{
    string stuName;
    double stuScore;
};
struct Teacher
{
    string teaName;
    Student stuArr[5];
};
// ����ʦ��ѧ����ֵ
void allocateSpace(Teacher teaArr[], int lenTea)
{
    string nameTeaSeed = "ZLF";
    string nameStuSeed = "12345";  // �ַ�����������ƴ������
    for(int i = 0; i < lenTea; i++)
    {
        teaArr[i].teaName = "";
        teaArr[i].teaName += nameTeaSeed[i];
        teaArr[i].teaName += "��ʦ";
        int lenStu =sizeof(teaArr[0].stuArr) / sizeof(teaArr[0].stuArr[0]); // ѧ�����鳤��
        for(int j = 0; j < lenStu; j++)
        {
            teaArr[i].stuArr[j].stuName = "ѧ��";
            teaArr[i].stuArr[j].stuName += nameStuSeed[j];
            // ����ɼ�
            int random = rand() % 61 + 40; // (0-60)+ 40
            teaArr[i].stuArr[j].stuScore = random;
        }
    }
}
// ��ӡ������Ϣ
void printTeacher(const Teacher * p, int lenTea)
{
   for (int i = 0; i < lenTea ;i++)
   {
    cout << "��ʦ" << i+1 << "������" << p[i].teaName << " ";cout << "�丨����ѧ����Ϣ" << endl;
    int lenStu =sizeof(p[0].stuArr) / sizeof(p[0].stuArr[0]); // ѧ�����鳤��
    for(int j = 0; j <  lenStu ; j++)
    {
      cout << "\tѧ��" << j+1 << "������" << p[i].stuArr[j].stuName << "���ɼ���" << p[i].stuArr[j].stuScore << "  ";
    }
    cout << endl;
   }
}
int main()
{
   // ���������
   srand((unsigned int)time(NULL));
   
   Teacher teaArr[3];

   /* ��������
   teaArr[0].teaName = "����ʦ";teaArr[0].stuArr[0].stuName = "��1";teaArr[0].stuArr[0].stuScore = 99;teaArr[0].stuArr[1].stuName = "��2";teaArr[0].stuArr[1].stuScore = 98;
   teaArr[0].stuArr[2].stuName = "��3";teaArr[0].stuArr[2].stuScore = 97;teaArr[0].stuArr[3].stuName = "��4";teaArr[0].stuArr[3].stuScore = 96;teaArr[0].stuArr[4].stuName = "��5";teaArr[0].stuArr[4].stuScore = 95;
   
   teaArr[1].teaName = "����ʦ";teaArr[1].stuArr[0].stuName = "��1";teaArr[1].stuArr[0].stuScore = 94;teaArr[1].stuArr[1].stuName = "��2";teaArr[1].stuArr[1].stuScore = 93;
   teaArr[1].stuArr[2].stuName = "��3";teaArr[1].stuArr[2].stuScore = 92;teaArr[1].stuArr[3].stuName = "��4";teaArr[1].stuArr[3].stuScore = 91;teaArr[1].stuArr[4].stuName = "��5";teaArr[1].stuArr[4].stuScore = 90;

   teaArr[2].teaName = "����ʦ";teaArr[2].stuArr[0].stuName = "��1";teaArr[2].stuArr[0].stuScore = 89;teaArr[2].stuArr[1].stuName = "��2";teaArr[2].stuArr[1].stuScore = 88;
   teaArr[2].stuArr[2].stuName = "��3";teaArr[2].stuArr[2].stuScore = 87;teaArr[2].stuArr[3].stuName = "��4";teaArr[2].stuArr[3].stuScore = 86;teaArr[2].stuArr[4].stuName = "��5";teaArr[2].stuArr[4].stuScore = 85;
   */

   int lenTea = sizeof(teaArr) / sizeof(teaArr[0]); // ��ʦ���鳤��
 
   allocateSpace(teaArr,lenTea);

   printTeacher(teaArr,lenTea);
   
   system("pause");
   return 0;
}
