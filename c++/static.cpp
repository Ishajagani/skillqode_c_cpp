#include <iostream>
using namespace std;
class statcount
{
    public:
    static int stcount;
    void setcount (int n)
    {
        stcount = n;
    }
    void counter()
    {
        stcount++;
    }
    void getcount()
    {
        cout<<"\n"<<stcount;
    }
};
int statcount :: stcount=0;
int main()
{
    statcount obj1,obj2,obj3;
    obj1.setcount(10);
    obj3.counter();
    //obj1.getcount();
    obj1.getcount();
    //cout<<"\n static :"<<statcount::stcount;
    //cout<<"\n static :"<<stcount;
}

