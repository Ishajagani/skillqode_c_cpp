#include <iostream>
using namespace std;
int main()
{
    int order, takeorder;
    cout << "|----------------------MENU-------------------|" << endl;
    cout << endl;
    cout << "(1) Pizza                     $5 only." << endl;
    cout << "(2) Dosa                      $4 only." << endl;
    cout << "(3) Burger                    $4 only." << endl;
    cout << "(4) Rise                      $3 only." << endl;
    cout << "(5) Coke                      $2 only." << endl;
    cout << endl;
    cout << "Give me your order........";
    cin >> order;
    cout << "Enter your quntity........";
    cin >> takeorder;
    cout << endl;

    switch (order)
    {
    case 1:
        cout << "Order : Pizza" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  $5 only" << endl;
        cout << "Total price : "
             << " $ " << 5 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------THANK YOU FOR COMING-------------|" << endl;
        break;

    case 2:
        cout << "Order : Dosa" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  $4 only" << endl;
        cout << "Total price : "
             << " $ " << 4 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------THANK YOU FOR COMING-------------|" << endl;
        break;

    case 3:
        cout << "Order : Burger" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  $4 only" << endl;
        cout << "Total price : "
             << " $ " << 4 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------THANK YOU FOR COMING-------------|" << endl;
        break;

    case 4:
        cout << "Order : Rise" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  $3 only" << endl;
        cout << "Total price : "
             << " $ " << 3 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------THANK YOU FOR COMING-------------|" << endl;
        break;

    case 5:
        cout << "Order : Coke" << endl;
        cout << "Number of order : " << takeorder << endl;
        cout << "Price of each order  :  $2 only" << endl;
        cout << "Total price : "
             << " $ " << 2 * takeorder << " "
             << "only" << endl;
        cout << endl;
        cout << "|------------THANK YOU FOR COMING-------------|" << endl;
        break;
    }
    return 0;
}
