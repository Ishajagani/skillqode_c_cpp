// constuctor overloding
#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "\n defult constructor called...";
    }
    test(int n)
    {
        cout << "\n parameterize with one parameter constructor called..." << n;
    }
    test(int n, int m)
    {
        cout << "\n perameterrize with two parameter constructor called n:" << n << "\t m:" << m;
    }
};
int main()
{
    test t1, t2(12), t3(10, 20);
}