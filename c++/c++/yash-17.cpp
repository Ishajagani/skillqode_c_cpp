#include <iostream>
using namespace std;
int main()
{
    float a, hra, da, total;
    cout << "Enter the a :";
    cin >> a;
    if (a < 5000)
    {
        hra = (a * 0.08);
        cout << "total hra " << hra;
        da = (a * 0.20);
        cout << "\n total da " << da;
        total = a - hra - da;
        cout << "\n total " << total;
    }
    else if (a < 10000)
    {
        hra = (a * 0.12);
        cout << "total hra " << hra;
        da = (a * 0.30);
        cout << "\n total da " << da;
        total = a - hra - da;
        cout << " \n total " << total;
    }
    else if (a < 15000)
    {
        hra = (a * 0.15);
        cout << "total hra " << hra;
        da = (a * 0.10);
        cout << "\n total da " << da;
        total = a - hra - da;
        cout << "\n total " << total;
    }
    if (a > 15000)
    {
        hra = (a * 0.20);
        cout << "total hra " << hra;
        da = (a * 0.50);
        cout << "\n total da " << da;
        total = a - hra - da;
        cout << " \n total " << total;
    }
}