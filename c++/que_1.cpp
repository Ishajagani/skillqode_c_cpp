#include <iostream>
using namespace std;
class student
{

private:
    char name[30], grade;
    int rollNo, english, hindi, maths;
    int total;
    float perc;

public:
    void getdata()
    {
        cout << "enter name:";
        cin >> name;
        // printf("enter name :");
        // scanf("%s",a);
        cout << "enter english :";
        cin >> english;
        cout << "enter hindi :";
        cin >> hindi;
        cout << "enter maths :";
        cin >> maths;
    }
    void calculate()
    {

        total = english + hindi + maths;
        // printf("\ntotal=%d",total);
        perc = (float)total / 300 * 100;
        // printf("\npercent =%d",pr);
    }
    void putdata()
    {
        cout << "\n total :" << total;
        cout << "\n perc:" << perc;
        cout << "\n grade :" << grade;

        if (perc > 80)
        {
            cout << "A";
        }
        else if (perc > 60)
        {
            cout << " B";
        }
        else if (perc > 40)
        {
            cout << "C";
        }
        else
        {
            cout << "fail";
        }
        cout << "\n______________________________________________________";
    }
};
int main()
{
    student obj1;
    obj1.getdata();
    obj1.calculate();
    obj1.putdata();
}
