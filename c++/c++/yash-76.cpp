#include <iostream>
#include <string.h>
using namespace std;
class employ
{
    char dr[20];
    char nm[20];

public:
    void read();
    void display();
};

class salary : public employ
{
protected:
    int s1;

public:
    void getsalary();
    void putsalary();
};

class totalsalary : public salary
{
    int t;
    float b;
    float ts;
    char div[10];

public:
    void process();
    void printtotalsalary();
};

void employ ::read()
{
    cout << "Enter name :";
    cin >> dr;
    cout << "Enter department :";
    cin >> nm;
}

void employ ::display()
{
    cout << "\n name :" << dr << endl;
    cout << " department :" << nm << endl;
    cout << "\n";
}

void salary ::getsalary()
{
    cout << "Enter salery :" << endl;
    cin >> s1;
}

void salary ::putsalary()
{
    cout << " salery :" << s1 << endl;
}

void totalsalary ::process()
{
    t = s1;
    if (t > 15000)
    {
        b = (t * 10) / 100;
        cout << "add bounas" << b;
    }
    else
    {
        b = 0;
        cout << "add bounas :" << b;
    }
}

void totalsalary ::printtotalsalary()
{
    cout << "bounas :" << b << endl;
    cout << "\n";
    ts = t + b;
    cout << "totalsalary :" << ts << endl;
}

int main()
{
    totalsalary x;

    x.read();
    x.getsalary();
    x.process();
    x.display();
    x.putsalary();
    x.printtotalsalary();
    return 0;
}