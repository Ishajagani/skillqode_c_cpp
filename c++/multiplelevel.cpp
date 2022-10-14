#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A constructor called...";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"\n B Constructor called...";   
    }
};
class C : public B
{
    public:
    C()
    {
        cout<<"\n C Constructor called...";   
    }
};
int main()
{
    C c;
}

