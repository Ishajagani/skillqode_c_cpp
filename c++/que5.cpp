//5 
#include<iostream>
using namespace std;
class book
{
    int book_no;
    string book_title;
    float price;
    float totalcost;
    public:
    void total_cost();
    void input();
    void purchase();
};
    void book::input()
    {
        cout<<"\n enter book_no :- ";
        cin>>book_no;
        cout<<"\n enter book_title :- ";
        cin>>book_title;
        cout<<"\n enter price :- ";
        cin>>price;
        total_cost();
    }
    void book::total_cost()
    {
        totalcost = book_no*price;
    }
    void book::purchase()
    {
        cout<<"\n book_no :- "<<book_no;
        cout<<"\n book_title :- "<<book_title;
        cout<<"\n price :- "<<price;
        cout<<"\n total_cost :- "<<totalcost;
    }
int main()
{
    book copies;
    copies.input();
    copies.purchase();
}