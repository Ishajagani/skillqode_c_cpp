#include<stdio.h>
#include<conio.h>
#define SIZE 10
int main()
{
    int a[10], b[10], i, k, merge[50];
    //printf("\n Enter Array 1 Size: ");
    //scanf("%d", &a[10]);
    printf("\n Enter Array 1 Elements: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &a[i]);
        merge[i] = a[i];
    }
    k = i;
    //printf("\n Enter Array 2 Size: ");
    //scanf("%d", &b[10]);
    printf("\n Enter Array 2 Elements: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &b[i]);
        merge[k] = b[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    return 0;
}