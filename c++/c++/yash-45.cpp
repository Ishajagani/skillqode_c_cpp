#include <iostream>
using namespace std;
int main()
{
    int s;
    int dosum();
    s = dosum();
    cout << "\n sum :" << s;
}
int dosum()
{
    int a, b;
    cout << "\n enter two values...";
    cin >> a >> b;
    return a + b;
}