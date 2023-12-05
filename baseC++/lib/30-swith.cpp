#include<iostream>
using namespace std;
int main()
{
    // switch
    // 给电影评分（ 9-10: 经典；7-8：非常好；5-6：一般；0-4：烂片）
    cout << "请给电影打分: " << endl;
    int score = 0; // 创建并初始化
    cin >> score;
    cout << "您打的分数为：" << score << endl;
    
    // 语法：
    /* 
    switch(表达式)
    {
        case 结构1;执行语句;break;
        ...
        default: 执行语句l;break;
    }
    */

    switch(score)
    {
        case 10: 
             cout << "经典" << endl;
             break;  // 若没有break，该条件满足后，后续都会执行。
        case 9: 
            cout << "经典" << endl;
            break;
        case 8: 
            cout << "非常好" << endl;
            break;
        case 7:  // 一块写！！！
        case 6: 
            cout << "一般" << endl;
            break;
        case 5: 
            cout << "一般" << endl;
            break;
        default:
            cout << "烂片" << endl;
            break;  // 一般每个分支都要写break
    }
    // switch 缺点：判断条件只能是整形或者字符，不可以是个区间。优点：结构清晰，执行效率高

    system("pause");
    return 0;
}