#include <iostream>
using namespace std;

int main()
{
    char a = 97;
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j% 2 == 0)
             cout<<"\t"<<(char)(a-32);
            else
             cout<<"\t"<<(char)(a);
             a++;
        }
        cout << "\n";
    }
}