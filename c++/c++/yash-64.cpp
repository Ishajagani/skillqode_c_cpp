#include <iostream>
using namespace std;
class Triangle
{
    float base, height;

public:
    void setBase(float b)
    {
        base = b;
    }
    void setHeight(float h)
    {
        height = h;
    }
    float area()
    {
        float a;
        a = 1.0 / 2.0 * base * height;
        return a;
    }
};
int main()
{

    Triangle triangle1;
    float b, h;
    cout << "Enter base and height of triangle=";
    cin >> b >> h;
    triangle1.setBase(b);
    triangle1.setHeight(h);
    cout << "Area of Triangle=" << triangle1.area();

    return 0;
}