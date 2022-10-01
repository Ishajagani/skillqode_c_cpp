#include <iostream>
using namespace std;
class Bank
{
    int acc_no, balance;
    string name;

public:
    static int count;
    Bank(int acc_no, int balance, string name)
    {
        this->acc_no = acc_no;
        this->balance = balance;
        this->name = name;
        count++;
    }
    void getDetails()
    {
        cout << "\n"
             << acc_no << "-" << name << balance;
    }
};
int Bank::count; // scope resolution operator
int main()
{
    Bank om(101, 2500, "om"), gr(120, 2500, "griva"), ha(103, 2599, "hari");
    om.getDetails();
    gr.getDetails();
    ha.getDetails();

    cout << "\n total Bank Account :" << Bank::count;
    return 0;
}
