#include <iostream>
using namespace std;
int main()
{
    float a, total;
    cout << "showing the value ";
    cin >> a;

    if (a <= 2500)
    {
        total = (a * 0 / 100);
        cout << "\n Enter tax " << total;
    }
    else if (a <= 5000)
    {
        total = (a - 2500) * 10 / 100;
        cout << "\n Enter tax " << total;
    }
    else if (a <= 10000)
    {
        total = (a - 5000) * 20 / 100 + (2500 * 10 / 100);
        cout << "\n Enter the tax" << total;
    }
    else
    {
        total = (a - 10000) * 30 / 100 + (5000 * 20 / 100) + (2500 * 10 / 100);
        cout << "\n Enter the tax " << total;
    }
}