#include <iostream>
using namespace std;
int main()
{
    int m, p, s, z, per;
    cout << "Enter the m&p&s :";
    cin >> m >> p >> s;

    z = m + p + s;
    per = (z * 100) / 300;
    cout << "\n total " << per;
    if (per >= 75)
    {
        cout << "\n grade a";
    }
    else if (per >= 60 && per <= 75)
    {
        cout << "\n grade b";
    }
    else if (per >= 59 && per <= 50)
    {
        cout << "\n grade c";
    }
    else if (per >= 50 && per <= 40)
    {
        cout << "\n grade d";
    }
    else
    {
        cout << "\n fail";
    }
}