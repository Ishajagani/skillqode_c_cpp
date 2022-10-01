
#include <iostream>
using namespace std;
int main()
{
    void dosum();
    dosum();
}
void dosum()
{
    int a, b;
    cout << "\n Enter two values.....";
    cin >> a >> b;
    cout << "\n Sum :" << a + b;
}