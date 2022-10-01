#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

public:
    loc() {}
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }

    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    loc operator+(loc op2);
    loc operator-(loc op2);
};

loc loc ::operator+(loc op2) // operator function
{
    loc temp;

    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
loc loc ::operator-(loc op2)
{
    loc temp;

    temp.longitude = op2.longitude - longitude;
    temp.latitude = op2.latitude - latitude;
}

int main()
{
    loc ob1(30, 30), ob2(5, 5), ob3;
    ob1.show();
    ob2.show();
    ob3 = ob1 + ob2;
    ob3.show();

    ob1.show();
    ob2.show();
    ob1 = ob2 - ob1;
    ob1.show();

    return 0;
}