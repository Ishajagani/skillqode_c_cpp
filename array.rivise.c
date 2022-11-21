#include<stdio.h>
int main()
{
    int a[]={11,22,33,44,55};
    for(int i=0;i<5;i++)
        printf("\n %d -%u",a[i],&a[i]);
        
        printf("\n%d",sizeof (int));
}