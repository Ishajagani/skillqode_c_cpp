// hybrid inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int l;
    void len()
    {
        cout << "langth :";
        cin >> l;
    }
};
class C
{
public:
    int h;
    void height()
    {
        cout << "height :";
        cin >> h;
    }
};
class B : public A
{
public:
    int b, c;
    void l_into_b()
    {
        len();
        cout << "breadth :";
        cin >> b;
        c = b * l;
    }
};
class D : public B, public C
{
public:
    int res;
    void result()
    {
        l_into_b();
        height();
        res = h * c;
        cout << "\n ";
        cout << endl
             << "result(l*b*h) :" << res;
    }
};
int main()
{
    D dobj;
    dobj.result();
    return 0;
}