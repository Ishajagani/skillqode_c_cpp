#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"welcome to skillqode";
        filestream<<"\n after exam";

        filestream.close();
    }
    else
        cout<<"file opening is fail";
    return 0;
}