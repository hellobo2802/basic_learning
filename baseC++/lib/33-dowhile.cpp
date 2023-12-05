#include<iostream>
using namespace std;
int main()
{
    // do while
    // 输出0-9
    
    /*
    do{执行语句}while(条件)
    */
    int num = 0;
    do
    {
        cout << num << endl;
        num++;
    } while (num < 10);
    

    system("pause");
    return 0;
}