#include <iostream>
using namespace std;
class test
{
    int eng, guj, per;

public:
    void getvalue()
    {
        cout << "\n enter eng : ";
        cin >> eng;
        cout << "\n enter guj :";
        cin >> guj;
    }
    void gettotal()
    {
        cout << "\n total:" << eng + guj;
    }
    void getper()
    {
        cout << "\n per :" << (eng + guj) * 100 / 200;
    }
    void getgread()
    {
        per = (eng + guj) * 100 / 200;
        if (per > 80 && per < 100)
        {
            cout << "\n gread a ";
        }
        else if (per > 70 && per < 79)
        {
            cout << "\n gread b ";
        }

        else if (per > 50 && per < 69)
        {
            cout << "\n gread c ";
        }
        else if (per > 30 && per < 49)
        {
            cout << "\n gread d";
        }
        else
        {
            cout << "\n failed";
        }
    }
};
int main()
{
    test a;
    a.getvalue();
    a.gettotal();
    a.getper();
    a.getgread();
    return 0;
}