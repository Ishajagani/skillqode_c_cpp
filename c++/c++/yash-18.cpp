#include <iostream>
using namespace std;
int main()
{
    float rate, qty, amount, dis, total, gst, paidbill;
    cout << "enter rate & qty :";
    cin >> rate >> qty;
    cout << "\n rate \tqty \tamount \tdis \ttotal \tgst \tpaid bill";
    cout << "\n"
         << rate;
    cout << "\t " << qty;
    amount = rate * qty;
    cout << "\t" << amount;
    dis = amount * 0.05;
    cout << "\t" << dis;
    total = amount - dis;
    cout << "\t" << total;
    gst = total * 0.18;
    cout << "\t" << gst;
    gst;
    paidbill = gst + total;
    cout << "\t" << paidbill;
}