#include <iostream>
using namespace std;
class Area
{
    public:
    void calcArea(int);
    void calcArea(int,int);
    double calcArea(double);
};
void Area::calcArea(int side)
{
    cout<<"\n Area:"<<side*side;
}
void Area::calcArea(int l,int b)
{
    cout<<"\n Area:"<<l*b;
}
double Area::calcArea(double side)
{
    return side*side;
}
int main()
{
    Area square,rect;
    square.calcArea(8);
    cout<<"\n square area in double:"<<square.calcArea(7.5);
    rect.calcArea(7,8);
    return 0;
}
    