/*#include<stdio.h>
void rec(int n)
{
    printf("\n before %d",n);
    if(n<3);
        rec(n+1);
    else
        return 1;
    printf("\n after %d",n);
}
int main()
{
    rec(1);
}*/


#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    printf("\n factorial : %d",fact(5));
}