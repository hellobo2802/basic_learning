#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // goto 跳至标记处
   cout << "1、xxx" << endl;
   cout << "2、xxx" << endl;
   cout << "3、xxx" << endl;
   
   goto FLAG;

   cout << "4、xxx" << endl;
   cout << "5、xxx" << endl;
   FLAG:
       {
        cout << "xxxx" <<endl;
        cout << "xxxx" <<endl;
       }
    cout << "fpf、xxx" << endl;
    cout << "lsb、xxx" << endl;

   system("pause");
   return 0;
}
