#include <iostream>
#include <vector>
#include <ctime>
#include<iomanip>

using namespace std;
/*
设计一个英雄的结构体：姓名、随机年龄、性别；创建结构体数组，存放5名英雄；
通过冒泡排序，将数组中的英雄按照年龄进行升序排序，最终输出
*/
struct Hero
{
    string name;
    int age;
    bool gender;
};
// 初始化结构体一数组
void allocateSpace(Hero hero[], int len)
{
    string names[] = {"冯攀峰","刘少博","张三","李四","王五"};
    string genders = "11010"; // string类型，取其中的数字也是字符类型
    for(int i = 0; i < len; i++)
    {
        hero[i].name = names[i];
        /*
        cout << "string中的一位类型为：" << typeid(genders[i]).name() << endl; // c：char(字符类型)。则“1”的数字为ASCII的49
        hero[i].gender = genders[i];
        cout << hero[i].gender << endl; // 输出是什么？为何？
        // answer: 输出永远是1。使用字符串按位取值，其值类型为字符。将其赋值给int/bool时，输出对应的ASCII码/1。
        // 那么如何正确取到字符串里面的数字呢？
        hero[i].gender = genders[i] - '0'; // 转为对应的数字
        */
        hero[i].gender = genders[i] - '0'; // 转为对应的数字
        int random = rand()%16 + 16; // rand()生成0-最大随机数的整型数字
        hero[i].age = random;
    }
}
// ?升序冒泡排序
void bubbbleSort(Hero * p, int len) // 写const的话，就不允许改动了！
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
// 结构体数组输出
void printInfo(const Hero * p, int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << "\tage: " << p[i].age << " \tname: " << p[i].name << "\tgender: ";
        if (p[i].gender == 1)
            cout << "男" << endl;
        else
            cout << "女" << endl;
    }
}
int main()
{
   srand((unsigned int)time(NULL)); // 根据系统时间生成随机数种子
   Hero hero[5];
   int len = sizeof(hero) / sizeof(hero[0]);

   allocateSpace(hero, len);
   
   cout << "排序前：" << endl;
   printInfo(hero, len);

   bubbbleSort(hero, len);

   cout << "排序后：" << endl;
   printInfo(hero, len);

   system("pause");
   return 0;
}
