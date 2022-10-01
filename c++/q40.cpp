#include <iostream>
using namespace std;
int main()
{
    void pattern(int);
    pattern(3);
    pattern(5);
    pattern(7);
    pattern(1);
    pattern(1);
    pattern(1);
    pattern(1);
}
void pattern(int n)
{
    int i, j, sp = 50;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < sp; j++)
            cout << " ";
        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << "\n";
        sp--;
    }
}