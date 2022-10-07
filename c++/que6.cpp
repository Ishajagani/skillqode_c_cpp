//6
#include<iostream>
using namespace std;
class report
{
    int addno,marks1,marks2,marks3,marks4,marks5;
    string name;
    float marks;
    float average;
    void getavg();
    public:
    void readinfo();
    void displayinfo();
};
    void report::readinfo()
    {
        cout<<"\n enter addmission number :- ";
        cin>>addno;
        cout<<"\n enter student name :-";
        cin>>name;
        cout<<"\n enter marks1 :-";
        cin>>marks1;
        cout<<"\n enter marks2 :-";
        cin>>marks2;
        cout<<"\n enter marks3 :-";
        cin>>marks3;
        cout<<"\n enter marks4 :-";
        cin>>marks4;
        cout<<"\n enter marks5 :-";
        cin>>marks5;
        getavg();
    }
    void  report::getavg()
    {
        marks=marks1+marks2+marks3+marks4+marks5;   
        average = marks/5;
    }
    void report::displayinfo()
    {
        cout<<"\n  addmission number :- "<<addno;
        cout<<"\n  student name :-"<<name;
        cout<<"\n  marks :-"<<marks;
        cout<<"\n average of marks :- "<<average;
    }
int main()
{
    report marks;
    marks.readinfo();
    marks.displayinfo();
}