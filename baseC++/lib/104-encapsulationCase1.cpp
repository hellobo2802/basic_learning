// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
����������ࣻ��������������������ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ͬ
*/
class Cube
{
private:
    double m_L;
    double m_W;
    double m_H;
public:
    void init(double m_L, double m_W, double m_H)
    {
        this->m_L = m_L;
        this->m_W = m_W;
        this->m_H = m_H;
    };
    double getM_L()
    {
        return m_L;
    };
    double getM_H()
    {
        return m_H;
    };
    double getM_W()
    {
        return m_W;
    };
    double caculateMJ()
    {
        return 2 * ((m_H * m_L) + (m_L * m_W) + (m_W * m_H));
    };
    double caculateTJ()
    {
        return m_H * m_L * m_W;
    };
    bool EQ(Cube c1)
    {
        // if((c1.caculateMJ() == this->caculateMJ()) && (c1.caculateTJ() == this->caculateTJ()))  // c++�е������Աʹ��  this->
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        if((this->m_H==c1.m_H) && (this->m_L==c1.m_L) && (this->m_W==c1.m_W))
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};

bool EE(Cube c1, Cube c2)  // ȫ�ֺ���
{
    // if((c1.caculateMJ() == c2.caculateMJ()) && (c1.caculateTJ() == c2.caculateTJ()))
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    if(c1.getM_H()==c2.getM_H())
    {
        if(c1.getM_L()==c2.getM_L())
            if(c1.getM_W()==c2.getM_W())
            return true;
    }
    else
    {
        return false;
    }
};

int main()
{
   Cube c3, c4;
   c3.init(1,2,3);
   c4.init(3,2,1);
   cout << "������c3���Ϊ��" << c3.caculateTJ() << endl;
   cout << "������c4���Ϊ��" << c4.caculateTJ() << endl;

   if(c3.EQ(c4))
   {
    cout << "��������������������ͬ��" << endl;
   }
   else
   {
    cout << "����������������������ͬ��" << endl;
   }

   if(EE(c3, c4))
   {
    cout << "��������������������ͬ��" << endl;
   }
   else
   {
    cout << "����������������������ͬ��" << endl;
   }


   system("pause");
   return 0;
}
