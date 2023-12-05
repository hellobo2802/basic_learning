#include <iostream>
#include <vector>

using namespace std;

/*
结构体嵌套结构体
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
   lsb l = {"刘少博"};
   fpf f = {"冯攀峰",l};
   cout << f.name << "的真爱是" << f.trueLove.name << "! " << endl;
   system("pause");
   return 0;
}
