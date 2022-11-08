//single inheritance
#include<iostream>
using namespace std;
class employe
{
    string name;
    float da,hra;
    public:
    void read();
    void display();
};
void employe ::read()
{
    cout << "Enter the name:";
    cin >> name;
}
void employe::display()
{
    cout<<"\n the name of employe :-  "<<name<<endl;
}
class salarycount :public employe{
   float da,hra;
   int salary,total;
   public:
   void salaryread();
   void salarydisplay();
};
void salarycount::salaryread()
{
    cout<<"\n ENTER THE SALARY : -  ";
    cin>>salary;
}
void salarycount:: salarydisplay()
{

    if (salary< 5000)
    {
        hra = (salary * 0.08);
        cout << "total hra " << hra;
        da = (salary * 0.20);
        cout << "\n total da " << da;
        total =salary - hra - da;
        cout << "\n total " << total;
    }
    else if (salary< 10000)
    {
        hra = (salary* 0.12);
        cout << "total hra " << hra;
        da = (salary * 0.30);
        cout << "\n total da " << da;
        total = salary - hra - da;
        cout << " \n total " << total;
    }
    else if (salary < 15000)
    {
        hra = (salary * 0.15);
        cout << "total hra " << hra;
        da = (salary * 0.10);
        cout << "\n total da " << da;
        total = salary - hra - da;
        cout << "\n total " << total;
    }
    if (salary > 15000)
    {
        hra = (salary* 0.20);
        cout << "total hra " << hra;
        da = (salary* 0.50);
        cout << "\n total da " << da;
        total = salary - hra - da;
        cout << " \n total " << total;
    }
}
int main()
{
    salarycount x; 
    x.read();
    x.display();
    x.salaryread();
    x.salarydisplay();
    return 0;
}
