#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i, num, x;
    printf("\nenter number of elements of an aray:\n"); 
    scanf("%d",&n);
    printf("\nenter element:\n");
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("\nEnter a Number to Search: ");
    scanf("%d", &num);
    for(i=0; i<10; i++)
    {
        if(num == a[i])
        {
            printf("\nnum found at location %d",i+1);
            break;
        }
        if(i>10)
    }
    printf("\nFound at Index No.%d", x);
    return 0;
}