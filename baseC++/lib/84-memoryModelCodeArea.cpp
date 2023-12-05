#include <iostream>
#include <vector>

using namespace std;

/*
    内存分区模型：代码区、全局区、堆区、栈区
    程序编译后，生成exe可执行文件，程序运行前，包含代码区和全局区。
    代码区：存放CPU机器指令；一份代码共享；只读。
    全局区：存放全局变量、静态变量、常量(字符串常量、const全局常量)；程序结束后由系统释放。
    程序运行后，产生堆区和栈区。
    栈区：存放局部变量、函数形参。由编译器自动释放，不要返回局部变量的地址。
    堆区：由程序员管理释放。否则，程序结束后，自动释放。使用new开辟堆区数据
*/

// VSCode整理代码快捷键: Shift+Alt+F

int g_a = 10;  // 放在函数外的变量为全局变量
const int c_g_a = 10;  // const修饰全局变量，形成全局常量
int * function_a()
{
    int f_a = 10;  // 局部变量
    return &f_a;
}
int * function_b()
{
    int * p = new int(20);  // new int(20) 创建堆区数据，返回地址
    return p;
}
int main()
{
    int l_a = 10;
    static int s_a = 10;  // 在普通变量前面加static，转为静态变量
    const int c_l_a = 10;  // const修饰局部变量，形成局部常量
    cout << "局部变量l_a的地址：" << (int)&l_a << endl;
    cout << "全部变量g_a的地址：" << (int)&g_a << endl;
    cout << "静态变量s_a的地址：" << (int)&s_a << endl;
    cout << "字符串常量(不定义)lsbfpf的地址：" << (int)&"lsbfpf" << endl;
    cout << "全局常量c_g_a的地址：" << (int)&c_g_a << endl;
    cout << "局部常量c_l_a的地址：" << (int)&c_l_a << endl;
    int * p_a = function_a();
    // cout << "栈区局部变量f_a的值为：" << *p_a << endl;  // 函数结束后，局部变量的地址被释放，不能再操作其地址
    int * p_b = function_b();
    cout << "栈区局部变量f_b的值为：" << *p_b << endl;  // 函数结束后，局部变量的地址被释放，不能再操作其地址

    system("pause");
    return 0;
}