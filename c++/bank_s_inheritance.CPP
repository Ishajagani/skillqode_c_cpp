

#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
    int accountno;
    string accountType;
public:
    void getAccountDetails();
    void displayDetails();
    
};
class Person : public Bank
{
    
public:
    string name;
    void read();
    void disply();
};
void Person::read()
{
    cout<<"\n Account Holder Name.. ";
    cin>>name;
}
void Person::disply()
{
    cout<<"\n Account Holder Name.. "<<name<<endl;
}
void Bank::getAccountDetails()
{
    cout<<"\n Account Number..";
    cin>>accountno;
    cout<<"\n Account Type.. ";
    cin>>accountType;
}
void Bank::displayDetails()
{
    cout<<" Account Number.."<<accountno<<endl;
    cout<<" Account Type.. "<<accountType<<endl;
}
int main()
{
   Bank b;
   Person p;
   p.read();
   b.getAccountDetails();
   p.disply();
   b.displayDetails();
}
   

