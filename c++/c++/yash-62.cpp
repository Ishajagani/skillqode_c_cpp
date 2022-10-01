// area of square
#include <iostream>
using namespace std;
class myclass
{
    int a;

public:
    friend int sum(myclass);
    void set_ab(int l)
    {
        a = l;
    }
};
// return-type classname:: functionname()
//{}
void myclass ::set_ab(int a) // function declaration
{
    this->a = a;
}
int sum(myclass x)
{
    return x.a * x.a;
}
int main()
{
    myclass n;
    int l;
    cout << "\n enter the area : ";
    cin >> l;
    n.set_ab(l);
    // cout << "area of sqer :" << n.sum();
    cout << sum(n);
    return 0;
}