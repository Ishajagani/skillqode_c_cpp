#include <iostream>
using namespace std;
void getdata();
void multiply(int, int);

void getdata()
{
    int a, b;
    cout << "Enter two values...";
    cin >> a >> b;
    multiply(a, b);
}
void multiply(int x, int y)
{
    cout << "\n multiply :" << x * y;
}
int main()
{
    getdata();
}