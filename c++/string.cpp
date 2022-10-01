#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"please enter your name :\n";
    //cin>>str;
//cout<<"\n str:"<<str;
    getline(cin,str);

    cout<<"hello,"<<str<<"welcome to skill qode!\n";
    return 0;    
}