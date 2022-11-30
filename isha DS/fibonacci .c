#include<stdio.h>
void fibonacciseries(int range)
{
    int a=0 , b=1 , c;
    while(a<=range)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int range;
    printf(" enter range :");
    scanf("%d", &range);
    printf(" the fibonacci series is : \n");
    fibonacciseries(range);
    return 0;
}