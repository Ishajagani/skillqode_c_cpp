#include <iostream>
using namespace std;

int main()
{
    char k=65;
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
          cout<<"\t"<<k++;
        }
        cout<<"\n";
    }
} 