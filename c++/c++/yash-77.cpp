// multipal inheritance
#include <iostream>
using namespace std;
class area
{
public:
    float area_calc(float l, float b)
    {
        return l * b;
    }
};
class perimeter
{
public:
    float peri_calc(float l, float b)
    {
        return 2 * (l + b);
    }
};
class rectangle : private area, private perimeter
{
private:
    float length, breadth;

public:
    rectangle() : length(0.0), breadth(0.0) {}
    void get_data()
    {
        cout << "enter length :";
        cin >> length;
        cout << "enter breadth :";
        cin >> breadth;
    }
    float area_calc()
    {
        return area::area_calc(length, breadth);
    }
    float peri_calc()
    {
        return perimeter::peri_calc(length, breadth);
    }
};
int main()
{
    rectangle r;
    r.get_data();
    cout << "\n\n";
    cout << "area =" << r.area_calc();
    cout << "\n perimeter =" << r.peri_calc();
    return 0;
}