#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n Aconstructor";
    }
    ~A()
    {
        cout <<"\n A Destructor";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"\n B Constructor";   
    }
};
int main()
{
    B b;
}

