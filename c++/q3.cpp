#include<iostream>
using namespace std;
int main()
{
    float inches, feet;
    cout << "Enter the distance in inches: ";
    cin >> inches;
    feet = inches / 12;
    cout << "The Distance in feet is: " << feet;
    return 0;
}