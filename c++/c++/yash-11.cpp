#include <iostream>
using namespace std;
int main()
{
    int a, n;

    cout << "\n enter a = ";
    cin >> a;

    if (a % 5 == 0)
    {
        cout << "\n a is divide by 5  ";
    }
    else
    {
        cout << "\n a is not divide by 5";
    }
    if (a % 3 == 0)
    {
        cout << "\n a is divide by 3 ";
    }
    else
    {
        cout << "\n a is not divide by 3";
    }

    return 0;
}