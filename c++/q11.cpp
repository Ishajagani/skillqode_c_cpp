#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"\n enter a:";
    cin >> a;
    cout<<"\n enter b:";
    cin >>b;

    c=a*b;

    if ((c % 3 == 0) && (c % 7 == 0))
    {
        cout << "\nGiven number " << c << " is Divisible by 3 and 7";
    }
    else
    {
        cout << "\nGiven number " << c << " is Not Divisible by 3 and 7";
    }

    return 0;
}