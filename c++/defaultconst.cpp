#include <iostream>
using namespace std;
class bank
{
    int accountbalance, withdrawbalance,depositebalance,totalbalance,reminderbalance;

public:
    bank()
    {
        accountbalance = 1000;
        cout << "\n default constructor called..";
    }
    bank(int initbal)
    {
        accountbalance = initbal;
        cout << "\n parameterlized constructor called...";
    }
    void showaccountbalance() 
    {
        cout << "\n account balance :-.." << accountbalance;
        withdrawblance();
        cout << "\n";
    }
    void withdrawblance()
    
    {
        cout << "\n enter withdrawbalance :-..";
        cin >> withdrawbalance;
        reminderbalance = accountbalance - withdrawbalance;
        cout << "reminderbalance:-.." << reminderbalance;
        cout << "\n enter depositebalance :-..";
        cin >> depositebalance;
        totalbalance = reminderbalance + depositebalance;
        cout << "totalbalance:-.." << totalbalance;
    }
};
int main()
{
    bank person1(1500), person2(5000), person3;
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
}