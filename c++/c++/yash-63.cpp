// area of square
#include <iostream>
using namespace std;
class myclass
{
    int a;

public:
    friend int sum(myclass);
    void set_ab(int)
    {
        cout << "\n enter erea ";
        cin >> a;
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
    int a;
    cout << "\n enter the area : ";
    cin >> a;

    cout << sum(n);
    return 0;
}