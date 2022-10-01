#include<iostream>
using namespace std;
class bank
{
    int accbalance;
    public:
   bank()
    {
        accbalance=1000;
        cout<<"\ndefault constructor called..";
    }
    bank(int initbal)
    {
        accbalance=initbal;
        cout<<"\nparameterized constructor called..";
    }
    void showaccountbalance()
    {
        cout<<"\n account balance:"<<accbalance;
    }
};
int main()
{
    bank person1(1500),person2(5000),person3;
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
}
