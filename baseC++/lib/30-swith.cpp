#include<iostream>
using namespace std;
int main()
{
    // switch
    // ����Ӱ���֣� 9-10: ���䣻7-8���ǳ��ã�5-6��һ�㣻0-4����Ƭ��
    cout << "�����Ӱ���: " << endl;
    int score = 0; // ��������ʼ��
    cin >> score;
    cout << "����ķ���Ϊ��" << score << endl;
    
    // �﷨��
    /* 
    switch(���ʽ)
    {
        case �ṹ1;ִ�����;break;
        ...
        default: ִ�����l;break;
    }
    */

    switch(score)
    {
        case 10: 
             cout << "����" << endl;
             break;  // ��û��break������������󣬺�������ִ�С�
        case 9: 
            cout << "����" << endl;
            break;
        case 8: 
            cout << "�ǳ���" << endl;
            break;
        case 7:  // һ��д������
        case 6: 
            cout << "һ��" << endl;
            break;
        case 5: 
            cout << "һ��" << endl;
            break;
        default:
            cout << "��Ƭ" << endl;
            break;  // һ��ÿ����֧��Ҫдbreak
    }
    // switch ȱ�㣺�ж�����ֻ�������λ����ַ����������Ǹ����䡣�ŵ㣺�ṹ������ִ��Ч�ʸ�

    system("pause");
    return 0;
}