#include<iostream>
using namespace std;
// time ϵͳʱ��ͷ�ļ�
#include<ctime>
int main()
{
    int num = 0,n = 1;
    // �����������ӣ����������õ�ǰʱ���������������������ֹÿ���������һ��
    srand((unsigned int)time(NULL));

    // ϵͳ����һ������� rand()%100:[0,99]
    int answer = rand() % 100 + 1;
    cout << answer;
    cout << "�����������Ϸ��" << endl;
    cout << "�������һ�����֣��㿪ʼ�°ɣ�" << endl;
    cout << "5��û�¶Ծ�ʧ��Ŷ��" << endl;
    cin >> num;
    cout << "��µ������ǣ�" << num << endl;
    while(n < 5)
    {
        if(num > answer)
          cout << "�������СŶ���ٲ�һ����";
        else if(num < answer)
          cout << "���������Ŷ���ٲ�һ����";
        else
        {
            cout << "��¶��ˣ���ϲ������" << endl;
            cout << "��һ������" << n << "�Σ�����Ŷ��" << endl;
            break;
        }
        cin >> num;
        n++;
    }
    cout << "��һ������" << n << "�Σ����������ˡ�" << endl;
    cout << "ʧ���ˣ�" << endl;
    system("pause");
    return 0;
}