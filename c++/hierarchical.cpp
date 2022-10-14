#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"\n A constuctor called .... ";
    }
    /*~A()
    {
        cout<<"\n A destructor called...";
    }*/
};
class B :public A{
    public:
    B()
    {
        cout<<"\n B constructor called ...";
    }
};
class C :public A{
    public:
   C()
    {
        cout<<"\n C constructor called ...";
    }
};
class D :public A{
    public:
   D()
    {
        cout<<"\n D constructor called ...";
    }
};
int main()
{
 D d;
}