//4
#include<iostream>
using namespace std;
class flightmembers
{
    int flightnum;
    string destination;
    float distance,fuel;
    public:
    void calfuel();
    void feedinfo();
    void showinfo();
};
    void flightmembers::feedinfo()
    {
        cout<<"\n enter flight number of pessanger :- ";
        cin>>flightnum;
        cout<<"\n enter member destination:- ";
        cin>>destination;
        cout<<"\n enter member distance :- ";
        cin>>distance;
        calfuel();
    }
    void flightmembers::calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance>=1000 && distance<=2000)
        {
            fuel=1100;
        }
        else if(distance>=2000)
        {
            fuel=2200;
        }
    }
    void flightmembers::showinfo()
    {
        cout<<"\n  flight number of pessanger :- "<<flightnum;
        cout<<"\n  member destination :- "<<destination;
        cout<<"\n enter member distance :- "<<distance;
        cout<<"\n  member fuel :- "<<fuel;
    }
int main()
{
    flightmembers pessanger;
    pessanger.feedinfo();
    pessanger.showinfo();
}
