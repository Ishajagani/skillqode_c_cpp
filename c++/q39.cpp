#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (int i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            cout << "\t" << 5-j+1;
        }
        cout << "\n";
    }
}
