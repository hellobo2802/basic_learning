#include <iostream>
#include <vector>

using namespace std;

int main()
{
   cout << "¾Å¾Å³Ë·¨±í" << endl;
   for(int i = 1; i < 10; i++)
   {
    for(int j = 1; j <= i; j++)
    {
        if(j!=i)
            cout << j << "¡Á" << i << "=" << i*j << " ";
        else
            cout << j << "¡Á" << i << "=" << i*j;
    }
    cout << endl;
   }
   system("pause");
   return 0;
}
