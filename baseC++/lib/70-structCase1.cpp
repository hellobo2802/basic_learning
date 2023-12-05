#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

/*
3名老师，每名老师带5位学生。需求如下：设计学生和老师的结构体，老师结构体中，有老师姓名和一个存放5名学生的数组作为成员；学生的成员有姓名，随机考试分数；
创建数组存放3名老师，通过函数给每个老师及所带的学生赋值，最终打印老师的数据和学生的数据。
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
// 给教师和学生赋值
void allocateSpace(Teacher teaArr[], int lenTea)
{
    string nameTeaSeed = "ZLF";
    string nameStuSeed = "12345";  // 字符串可以用于拼接数据
    for(int i = 0; i < lenTea; i++)
    {
        teaArr[i].teaName = "";
        teaArr[i].teaName += nameTeaSeed[i];
        teaArr[i].teaName += "老师";
        int lenStu =sizeof(teaArr[0].stuArr) / sizeof(teaArr[0].stuArr[0]); // 学生数组长度
        for(int j = 0; j < lenStu; j++)
        {
            teaArr[i].stuArr[j].stuName = "学生";
            teaArr[i].stuArr[j].stuName += nameStuSeed[j];
            // 随机成绩
            int random = rand() % 61 + 40; // (0-60)+ 40
            teaArr[i].stuArr[j].stuScore = random;
        }
    }
}
// 打印所有信息
void printTeacher(const Teacher * p, int lenTea)
{
   for (int i = 0; i < lenTea ;i++)
   {
    cout << "教师" << i+1 << "姓名：" << p[i].teaName << " ";cout << "其辅导的学生信息" << endl;
    int lenStu =sizeof(p[0].stuArr) / sizeof(p[0].stuArr[0]); // 学生数组长度
    for(int j = 0; j <  lenStu ; j++)
    {
      cout << "\t学生" << j+1 << "姓名：" << p[i].stuArr[j].stuName << "，成绩：" << p[i].stuArr[j].stuScore << "  ";
    }
    cout << endl;
   }
}
int main()
{
   // 随机数种子
   srand((unsigned int)time(NULL));
   
   Teacher teaArr[3];

   /* 繁琐复杂
   teaArr[0].teaName = "张老师";teaArr[0].stuArr[0].stuName = "张1";teaArr[0].stuArr[0].stuScore = 99;teaArr[0].stuArr[1].stuName = "张2";teaArr[0].stuArr[1].stuScore = 98;
   teaArr[0].stuArr[2].stuName = "张3";teaArr[0].stuArr[2].stuScore = 97;teaArr[0].stuArr[3].stuName = "张4";teaArr[0].stuArr[3].stuScore = 96;teaArr[0].stuArr[4].stuName = "张5";teaArr[0].stuArr[4].stuScore = 95;
   
   teaArr[1].teaName = "刘老师";teaArr[1].stuArr[0].stuName = "刘1";teaArr[1].stuArr[0].stuScore = 94;teaArr[1].stuArr[1].stuName = "刘2";teaArr[1].stuArr[1].stuScore = 93;
   teaArr[1].stuArr[2].stuName = "刘3";teaArr[1].stuArr[2].stuScore = 92;teaArr[1].stuArr[3].stuName = "刘4";teaArr[1].stuArr[3].stuScore = 91;teaArr[1].stuArr[4].stuName = "刘5";teaArr[1].stuArr[4].stuScore = 90;

   teaArr[2].teaName = "冯老师";teaArr[2].stuArr[0].stuName = "冯1";teaArr[2].stuArr[0].stuScore = 89;teaArr[2].stuArr[1].stuName = "冯2";teaArr[2].stuArr[1].stuScore = 88;
   teaArr[2].stuArr[2].stuName = "冯3";teaArr[2].stuArr[2].stuScore = 87;teaArr[2].stuArr[3].stuName = "冯4";teaArr[2].stuArr[3].stuScore = 86;teaArr[2].stuArr[4].stuName = "冯5";teaArr[2].stuArr[4].stuScore = 85;
   */

   int lenTea = sizeof(teaArr) / sizeof(teaArr[0]); // 教师数组长度
 
   allocateSpace(teaArr,lenTea);

   printTeacher(teaArr,lenTea);
   
   system("pause");
   return 0;
}
