
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int dosum(int, int);
    cout << "\n Enter two value...";
    cin >> a >> b;
    dosum(a, b);
    cout << "\n sum : " << dosum(a, b);
}
int dosum(int p, int q)
{
    return p + q;
}