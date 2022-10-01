#include <iostream>
using namespace std;
int main()
{
    char i, j;
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << "\t" << i;
        }
        cout << "\n";
    }
}