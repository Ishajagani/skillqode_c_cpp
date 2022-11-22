#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[30];
    for(int i=0;i<20;i++)
       a[i]=rand()%50+50;
    for(int i=0;i<20;i++)
       printf("\n a[%d]:%d",i,a[i]);

}

