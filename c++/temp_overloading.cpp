#include<iostream>
using namespace std;
template<class T>
void display(T t1)
{
    cout<<"displaying template :"
    << t1<<"\n";
}
template <class T1,class T2>
void display(T1 t1,T2 t2)
{
    cout <<"displaying 1template:"
         <<t1<<"\t"
         <<t2<<"\n";
}
//void display(int t1)
//{
//cout <<"explicitly display:"
//     <<t1 <<"\n";
//}
int main()
{
    display(200);
    display(12.40);
    display('G');
    display('G',1.25);
    display('X',25);
    display(25,1.25);
    return 0;
}