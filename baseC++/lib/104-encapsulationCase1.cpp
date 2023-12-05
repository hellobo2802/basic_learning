// Created by Shaobo LIU.
#include <iostream>
#include <vector>

using namespace std;

/*
设计立方体类；求立方体的面积和体积；分别用全局函数和成员函数判断两个立方体是否相同
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
        // if((c1.caculateMJ() == this->caculateMJ()) && (c1.caculateTJ() == this->caculateTJ()))  // c++中调用类成员使用  this->
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

bool EE(Cube c1, Cube c2)  // 全局函数
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
   cout << "立方体c3体积为：" << c3.caculateTJ() << endl;
   cout << "立方体c4体积为：" << c4.caculateTJ() << endl;

   if(c3.EQ(c4))
   {
    cout << "两个立方体面积和体积相同！" << endl;
   }
   else
   {
    cout << "两个立方体面积和体积不相同！" << endl;
   }

   if(EE(c3, c4))
   {
    cout << "两个立方体面积和体积相同！" << endl;
   }
   else
   {
    cout << "两个立方体面积和体积不相同！" << endl;
   }


   system("pause");
   return 0;
}
