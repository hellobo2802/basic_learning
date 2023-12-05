#include<iostream>
using namespace std;
// time 系统时间头文件
#include<ctime>
int main()
{
    int num = 0,n = 1;
    // 添加随机数种子，作用是利用当前时间生成真正的随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));

    // 系统生成一个随机数 rand()%100:[0,99]
    int answer = rand() % 100 + 1;
    cout << answer;
    cout << "玩个猜整数游戏吧" << endl;
    cout << "我想好了一个数字，你开始猜吧！" << endl;
    cout << "5次没猜对就失败哦！" << endl;
    cin >> num;
    cout << "你猜的数字是：" << num << endl;
    while(n < 5)
    {
        if(num > answer)
          cout << "比这个数小哦，再猜一个！";
        else if(num < answer)
          cout << "比这个数大哦，再猜一个！";
        else
        {
            cout << "你猜对了，恭喜！！！" << endl;
            cout << "你一共猜了" << n << "次！可以哦！" << endl;
            break;
        }
        cin >> num;
        n++;
    }
    cout << "你一共猜了" << n << "次！次数用完了。" << endl;
    cout << "失败了！" << endl;
    system("pause");
    return 0;
}