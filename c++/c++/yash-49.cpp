#include <iostream>
using namespace std;
class test
{
public:
    void dominus(int x, int y)
    {
        cout << "\n minus:" << x - y;
    }
    void domod(int x, int y)
    {
        cout << "\n mod :" << x / y;
    }
    void doper(int x, int y)
    {
        cout << "\n per :" << x % y;
    }
};
int main()
{
    int x = 30, y = 10;
    cout << "\n before function call";
    test a;
    a.dominus(x, y);
    a.domod(x, y);
    a.doper(x, y);
    cout << "\n after function call";
    return 0;
}