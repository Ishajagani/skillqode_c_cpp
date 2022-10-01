#include <iostream>
using namespace std;
int main()
{
    float x, rate;
    cout << "showing a value = ";
    cin >> x;

    if (x < 100)
    {
        rate = (x * 0.6) + 50;
        cout << "total amount" << rate;
    }
    else if (x < 300)
    {
        rate = (x * 0.8) + (100 * 0.6) + 50;
        cout << "total amount" << rate;
    }
    else
    {
        rate = (x * 0.9) + (100 * 0.8) + (100 * 0.6) + 50 * 1.15;
        cout << " total amount " << rate;
    }
}