#include <iostream>
using namespace std;

int main()
{
    char a = 65, a2 = 97;
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {

                cout << "\t " << a;
                a++;
                a2++;
            }
            else
            {
                cout << "\t " << a2;
                a2++;
                a++;
            }
        }
        cout << "\n";
    }
}