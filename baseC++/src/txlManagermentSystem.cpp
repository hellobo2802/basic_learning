#include <iostream>
// #include <vector>

#define MAX 1000
using namespace std; // 标准名空间
// 显示菜单界面
void showMenu()
{
    cout << "***************************" << endl;
    cout << "****** 1. 添加联系人 ******" << endl;
    cout << "****** 2. 显示联系人 ******" << endl;
    cout << "****** 3. 删除联系人 ******" << endl;
    cout << "****** 4. 查找联系人 ******" << endl;
    cout << "****** 5. 修改联系人 ******" << endl;
    cout << "****** 6. 清空联系人 ******" << endl;
    cout << "****** 0. 退出通讯录 ******" << endl;
    cout << "***************************" << endl;
}
// struct
struct Person
{
    string m_mame;
    int m_sex;
    int m_age;
    string m_phoneNumber;
    string m_address;
};
struct Addressbooks
{
    Person personArray[MAX];
    int m_size;
};
void passOut()
{
    cout << "You had been passed out !" << endl;
    cout << "Welcome to use it again !" << endl;
    // system("pause");
}
void add(struct Addressbooks * abs)
{
    if (abs->m_size == MAX)
    {
        cout << "The number of contact reaches the MAX, and you CAN'T add the person！" << endl;
    }
    else
    {
            cout << "Please input the name of Person：" << endl;
            string name; cin >> name;
            abs->personArray[abs->m_size].m_mame = name;

            cout << "Please input the sex of Person：" << endl;
            cout << "1------male" << endl;
            cout << "2------female" << endl;
            int sex; 
            while(true)
            {
                cin >> sex;
                if(sex == 1 || sex ==2)
                {
                    abs->personArray[abs->m_size].m_sex = sex;
                    break;
                }
                else
                {
                    cout << "Please input the right number again ！" << endl;
                }
            }

            cout << "Please input the age of Person：" << endl;
            int age; cin >> age;
            abs->personArray[abs->m_size].m_age = age;

            cout << "Please input the phoneNumber of Person：" << endl;
            string phoneName; cin >> phoneName;
            abs->personArray[abs->m_size].m_phoneNumber = phoneName;

            cout << "Please input the address of the Person：" << endl;
            string address; cin >> address;
            abs->personArray[abs->m_size].m_address = address;

            abs->m_size++; // update the size of the addressbook
            cout << "The success of adding the person into the address book" << endl;
            system("pause");
            system("cls"); // Clear the windows
    }
}
void show(Addressbooks abs)
{
    if (abs.m_size == 0)
    {
        cout << "There is nobody in address book !" << endl;
    }
    else
    {
        cout << "-------------------------------------------------------------" << endl;
        cout << "--name-----sex-----age-----phoneNumber-----address--" << endl;
        for(int i = 0; i < abs.m_size; i++)
        {
            cout << "--" << abs.personArray[i].m_mame << "\t";
            cout << (abs.personArray[i].m_sex == 1?"male":"female") << "\t";
            cout << abs.personArray[i].m_age << "\t";
            cout << abs.personArray[i].m_phoneNumber << "\t";
            cout << abs.personArray[i].m_address << "--" << endl;
        }
        cout << "-------------------------------------------------------------" << endl;
    }
    system("pause");
    system("cls");
}
int isExist(Addressbooks abs, string name)
{
    for(int i = 0; i < abs.m_size; i++)
    {
        if(abs.personArray[i].m_mame == name)
            return i;
    }
    return -1;
}
void deletePerson(Addressbooks * abs, string name)
{
    int location = isExist(*abs, name);
    if(location == -1)
        cout << "It does not exist !" << endl;
    else
    {
        // data forward to cover the old data
        for(int i = location; i < abs->m_size - 1; i++) //personArray[999]删不掉。i+1出现时，警惕越界现象！！！
        {
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->m_size--; // reduce the size of address book
        cout << "The success of deleting the person !" << endl;
    }
    system("pause"); // show the context
    system("cls");
}
void find(Addressbooks abs,string name)
{
    /*
    way 1
    for(int i = 0; i < abs.m_size; i++)
    {
        if(abs.personArray[i].m_mame == name)
        {
            cout << "-------------------------------------------------------------" << endl;
            cout << "--name-----sex-----age-----phoneNumber-----address--" << endl;
            cout << "--" << abs.personArray[i].m_mame << "\t";
            cout << (abs.personArray[i].m_sex == 1?"male":"female") << "\t";
            cout << abs.personArray[i].m_age << "\t";
            cout << abs.personArray[i].m_phoneNumber << "\t";
            cout << abs.personArray[i].m_address << "--" << endl;
            cout << "-------------------------------------------------------------" << endl;

            system("pause");
            system("cls");
            return; // exit the function
        }
    }
    cout << "There is no people who  you want to find !" << endl;
    */
    int location = isExist(abs,name); 
    if(location == -1)
    {
        cout << "There is no people who  you want to find !" << endl;
    }
    else
    {
        cout << "-------------------------------------------------------------" << endl;
        cout << "--name-----sex-----age-----phoneNumber-----address--" << endl;
        cout << "--" << abs.personArray[location].m_mame << "\t";
        cout << (abs.personArray[location].m_sex == 1?"male":"female") << "\t";
        cout << abs.personArray[location].m_age << "\t";
        cout << abs.personArray[location].m_phoneNumber << "\t";
        cout << abs.personArray[location].m_address << "--" << endl;
        cout << "-------------------------------------------------------------" << endl;
    }
}
void update(Addressbooks * abs)
{
    cout << "Please input the name of the people who you want to change his/her information !" << endl;
    string name; cin >> name;
    int location = isExist(*abs,name);
    if(location == -1)
        cout << "He/Her is not exist !" << endl;
    else
    {
        cout << "You will change " << name <<"\'s information !" << endl;
        
        // show old information
        find(*abs,name);
        cout << "******************************" << endl;

        cout << "Please input the new name: " << endl;
        string newName; cin >> newName;
        abs->personArray[location].m_mame = newName;

        cout << "Please input the new sex：" << endl;
        cout << "1--------male" << endl;
        cout << "2--------famle" << endl;
        int newSex;
        while(true)
        {
            cin >> newSex;
            if(newSex == 1|| newSex == 2)
            {
                abs->personArray[location].m_sex = newSex;
                break;
            }
            else
                cout << "Please input the right NUMBER!" << endl;
        }

        cout << "Please input the new age: " << endl;
        int newAge; cin >> newAge;
        abs->personArray[location].m_age = newAge;

        cout << "Please input the new phone number: " << endl;
        string newPhoneNumber; cin >> newPhoneNumber;
        abs->personArray[location].m_phoneNumber = newPhoneNumber;

        cout << "Please input the new address: " << endl;
        string newAddress; cin >> newAddress;
        abs->personArray[location].m_address = newAddress;
    }
    system("pause");
    system("cls");
}
void clear(Addressbooks * abs)
{
    cout << "You will clear the WHOLE address book, Are you sure?" << endl;
    cout << "Y means YES, N means NO!" << endl;
    char judice;
    while(true)
    {
        cin >> judice;
        if(judice == 'Y' || judice == 'N')
        {
            if(judice == 'Y')
            {
                // Fake Clearance
                abs->m_size = 0;
                cout << "You have cleared all people who are in your address book!" << endl;
                system("pause");
            }
            else
            {
                system("cls");
            }
            return;
        }
        else
        {
            cout << "Please input the right CHAR!" << endl;
        }
    }
    
}
int main()
{
   int select = 0; // 用户选择
   Addressbooks abs; // 整个通讯录
   abs.m_size = 0;
   // 菜单调用
   while(true)
   {
    showMenu();
    cout << "Please input the number to choose the function !" << endl;
    cin >> select;
    switch(select)
    {
     case 1: // add
         add(&abs); // 地址传递，要在函数中修改
         break;
     case 2: // show
         show(abs);
         break;
     case 3: // delete // case里面执行多条语句的话，需要加一个{}
         {
            string name;
            cout << "Please input the name of person who will be deleted!" << endl;
            cin >> name;
            deletePerson(&abs,name);
         }
         break;
     case 4: // find
         {
                cout << "Please input the name of the person who you want to find him/her !" << endl;
                string name; cin >> name;
                find(abs,name);
                system("pause");
                system("cls");
         }
         break;
     case 5: // update
         update(&abs);
         break;
     case 6: // clear
         clear(&abs);
         break;
     case 0: // passOut
         passOut();
         return 0; // 直接结束main函数  
         break;
     default: // 最好有
         break;
    }
   }
   system("pause");
   return 0;
}
