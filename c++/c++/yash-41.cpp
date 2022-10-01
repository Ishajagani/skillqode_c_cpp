#include <iostream>
using namespace std;
int main()
{
    char i = 65;
    int a, j;
    for (a = 1; a <= 5; a++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << "\t " << i;
            i++;
        }
        cout << "\n";
    }
}
