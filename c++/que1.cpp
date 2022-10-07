#include<iostream>
using namespace std;
class Student
{
    int Admno;
    string shame;
    float eng,maths,science,total,per;
    public:
    int takedata()
    {
        cout<<"enter AdmNo:";
        cin>>Admno;
        cout<<"enter name:";
        cin>>shame;
        cout<<"enter eng:";
        cin>>eng;
        cout<<"enter maths:";
        cin>>maths;
        cout<<"enter science:";
        cin>>science;                   
   }
   float ctotal()
   {
        total=eng+maths+science;
        cout<<"total is:"<<total;
   }
   float showdata()
   {
     per=total/3;
     cout<<"\n per is:"<<per;
   }
};
int main()
{
    Student stud;
    stud.takedata();
    stud.ctotal();
    stud.showdata();
}