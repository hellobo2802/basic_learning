#include <iostream>
#include <vector>

using namespace std;
/*
结构体数组：数组中放入结构体
语法：
struct 结构体名 数组名[元素个数] = {{成员列表初始值},{}...}

*/
struct Student
{
    string name;
    double score;
};
int main()
{
   // 创建结构体数组
   Student arr[] = {{"冯攀峰",100},{"刘少博",100}};
   cout << arr[0].name << endl;
   cout << arr[1].name << endl;
   system("pause");
   return 0;
}
