#include<iostream>
using namespace std;
class Bank
{
    string name;
    int accBalance;
    public:
    Bank();
    Bank(int);
    void showAccountBalance();
    void getAccInfo();
    void showBankDetails();
};
void Bank::getAccInfo(){
    cout<<"\n Your Name Please.. ";
    cin>>name;
}
Bank::Bank(){
    accBalance=1000;
    cout<<"\n Defult Constructor Called..";
}
Bank::Bank(int initbal){
    accBalance=initbal;
    cout<<"\nParameterized Constructor Called .. ";
}
void Bank::showAccountBalance(){
    cout<<"\nAccount Blance : "<<accBalance;
}
void Bank::showBankDetails(){
    cout<<"\n Name : "<<name;
    cout<<"\n Account Balance : "<<accBalance;
}
int main()
{
    Bank person[3];
    person[1].getAccInfo();
    person[1].showAccountBalance();
    person[1].showBankDetails();
}



