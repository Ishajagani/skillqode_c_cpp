#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"\n A constuctor called .... ";
    }
    ~A()
    {
        cout<<"\n A destructor called...";
    }
};
class B 
{
    public:
    B()
    {
        cout<<"\n B constructor called ...";
    }
    ~B()
    {
        cout<<"\n B destructor called...";
    } 
}; 
class C : public A,public B
{
    public:
    C()
    {
        cout<<"\n C constructor called ...";
    }
    ~C()
    {
        cout<<"\n C destructor called...";
    }  
};
int main()
{
  C c;
}