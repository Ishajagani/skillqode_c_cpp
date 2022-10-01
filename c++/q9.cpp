#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "\nEnter any Number to Check it is Divisible by 5 =  ";
    cin >> number;

    if (number % 5 == 0)
    {
        cout << "\nGiven number " << number << " is Divisible by 5 ";
    }
    else
    {
        cout << "\nGiven number " << number << " is Not Divisible by 5 ";
    }

    return 0;
}