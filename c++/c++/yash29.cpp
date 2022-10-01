#include <iostream>
using namespace std;
int main()
{
    int i, i2, i3;

    for (i = 0; i <= 10; i++)
    {

        if (i % 2 == 1)
            cout << "\t " << i;
        else
            cout << "\t" << i * i;
    }
}
