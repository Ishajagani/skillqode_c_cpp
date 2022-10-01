#include <iostream>
#include <string>
using namespace std;
class Isha
{
    int salary, workinghvr, bonus, hvr, totalhvr;
    string emplname;

public:
    void Employeename()
    {
        cout << "Enter Employee Name : ";
        cin >> emplname;
    }

    void TotalHour()
    {
        cout << "Enter Total month Hvr (176 hvr total):";
        cin >> hvr;
    }
    void EmplSalary()
    {
        salary = hvr * 125;
    }
    void YearlyHvr()
    {
        totalhvr = salary * 12;
    }
    void YearlyBonus()
    {
        bonus = totalhvr * 10 / 100;
    }

    void GetSalary()
    {

        cout << "Total mothly Salary : " << salary;
        cout << "\nTotal Yearly Salary :" << totalhvr;
        cout << "\nTotal Diwali Bonus :" << bonus;
    }
};
int main()
{
    Isha emp1;
    emp1.Employeename();
    emp1.TotalHour(); 
    emp1.YearlyHvr();
    emp1.YearlyBonus();
    emp1.GetSalary();
}
