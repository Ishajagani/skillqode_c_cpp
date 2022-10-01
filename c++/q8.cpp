#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "\nEnter any Number to Check it is Divisible by 5 and 3 =  ";
    cin >> number;

    if ((number % 5 == 0) && (number % 3 == 0))
    {
        cout << "\nGiven number " << number << " is Divisible by 5 and 3";
    }
    else
    {
        cout << "\nGiven number " << number << " is Not Divisible by 5 and 3";
    }

    return 0;
}