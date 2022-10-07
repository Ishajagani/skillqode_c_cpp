#include<iostream>
using namespace std;
class example
{
    int a,b;
public:
    example (){}
    example(int x,int y)
    {
        a=x;
        b=y;
    }
    example add (example e1,example e2)
    {
        example temp;
        temp.a = e1.a + e2.a;
        temp.b = e1.b + e2.b;
        return temp;
    }
    void showval()
    {
        cout<<"value of object a:"<<a<<"\t b:"<<b<<"\n";
    }
};
int main()
{
    example e1(10,20),e2(20,30),e3;

    cout<<"\n e1";
    e1.showval();

    cout<<"\n e2";
    e2.showval();

    cout<<"\n e3";
    e3=e3.add(e1,e2);
    e3.showval();

    return 0;
}