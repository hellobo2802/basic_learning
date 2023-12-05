#include <iostream>
#include <vector>

using namespace std;
// 创建结构体
/*
语法：
struct structName{类型1 类型1名称;类型2 类型2名称...}A;
创建实例的三种方法：
struct structName s1;struct structName s2 = {...};在创建结构体时自动构建
*/
struct Student
{
    int age;
    string name;
    bool gender;
    double score;
}s3; // 第三种方法
int main()
{
   // 创建变量时 struct 可以省略
   Student ss;
   struct Student s1;
   s1.age = 10; s1.name = "冯攀峰"; s1.gender = 0; s1.score = 100.0;
   // cout << s1 << endl; 错误
   cout << s1.name << endl;
   
   s3.name = "喜欢";
   cout << s3.name << endl;

   struct  Student s2 = {11,"刘少博",1,100.0};
   cout << s2.name << endl;

   system("pause");
   return 0;
}
