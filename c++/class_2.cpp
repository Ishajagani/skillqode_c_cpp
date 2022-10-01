#include <iostream>
using namespace std;
class arith
{
    int a,b;
    public:
    void setval()
    {
        cout<<"\n enter a:";
        cin>>a;
        cout<<"\n enter b:";
        cin>>b;
    }
    void getval()
    {
        cout<<"\na:"<<a<<"\tb:"<<b;
    }
    void dosum()
    {
        cout<<"\n a+b:"<<a+b;
    }
};
int main()
{
    arith obj1,obj2;
    obj1.setval();
    obj1.getval();
    obj1.dosum();
}
