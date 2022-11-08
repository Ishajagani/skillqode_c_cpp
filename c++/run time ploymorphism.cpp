#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout <<"base class is invoked"<<endl;
    }
};
class dervied : public Base
{
public:
    void display()
    {
        cout <<"derived class in invoked"<<endl;
    }
};
int main()
{
    //dervied d;
    //d.display();
    Base *p,b;
    dervied d;
    p = &b;       //BASE
    p->display(); ///->point to
    p=&d;         //derived
    p->display();
    //base b;
    //b.display();  
}
