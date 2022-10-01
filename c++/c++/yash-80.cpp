// simpal inheritance
#include <iostream>
using namespace std;
class Car
{
public:
    int car_calc(int c, int b)
    {
        return c + b;
    }
};
class B : private Car
{
private:
    int car, bike;

public:
    B() : car(0.0), bike(0.0) {}
    void get_data()
    {
        cout << "enter car value :";
        cin >> car;
        cout << "\n enter bike value :";
        cin >> bike;
    }
    int car_calc()
    {
        return Car::car_calc(car, bike);
    }
};
int main()
{
    B c;
    c.get_data();
    cout << "\n\n";
    cout << "car =" << c.car_calc();
    return 0;
}