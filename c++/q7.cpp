#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two integers to find smallest...\n";
    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b : \n";
    cin >> b;

    cout << "You entered : " << a << " and " << b << endl;
    if (a < b)
    {
        cout << a << " is smaller than " << b;
    }
    else if (a > b)
    {
        cout << b << " is smaller than " << a;
    }
    else
    {
        cout << "both are equal";
    }
}
