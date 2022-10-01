#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "\n enter a&b&c = ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "\n a is largest  ";
    }
    else if (b > c)
    {
        cout << "\n b is largest";
    }

    else
    {
        cout << "\n c is largest";
    }

    return 0;
}