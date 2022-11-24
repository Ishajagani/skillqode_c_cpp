#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 10
int top = -1, a[SIZE],val,n;
void insertarray()
{
    int i;
    int a[10];
     for(int i=0;i<5;i++)
    {
        printf("enter a[%d] :",i);
        scanf("%u",&a[i]);
    }
    printarray(a);
}
void printarray(int a[])
{
    for(int i=0;i<5;i++)
    {
        printf("\n %d  - %u ",a[i],&a[i]);
    }
}
void lastinsert(int val)
{
    if (top >= SIZE)
    {
       printf("Array is Full\n");
    }
    else
        printf("\nEnter Value : ");
        scanf("%d", &val);
        a[++top] = val;
}
void pop()
{
    if (top < 0)
    {
        printf("stack undeflow");
    }
    else
    {
        int x;
        x = a[top--];
    }
}
void display()
{
    for (int i = 0; i <= SIZE; i++)
    {
        printf("%d  ", a[i]);
    }
    top = n;
    top++;
}
int main()
{
    insertarray();
    lastinsert(val);
    pop();
    display();
}

