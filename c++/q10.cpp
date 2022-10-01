#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "\nEnter any Number to Check it is Divisible by 3 and 7 =  ";
    cin >> number;

    if ((number % 3 == 0) && (number % 7 == 0))
    {
        cout << "\nGiven number " << number << " is Divisible by 3 and 7";
    }
    else
    {
        cout << "\nGiven number " << number << " is Not Divisible by 3 and 7";
    }

    return 0;
}