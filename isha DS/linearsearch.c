/*#include <stdio.h>
int main()
{
  int a[100],x, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Enter a number to search\n");
  scanf("%d", &x);

  for (i = 0;i < n; i++)
  {
    if (a[i] == x)  
    {
      printf("%d is present at location %d.\n", x,i+1);
    }
  }
  return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
#define pr printf 
//#define SIZE 10
int main()
{
    int a[]={11,12,13,14,15,16,17,18,19,20},n,x,i;

    printf("Enter a number to search\n");
    scanf("%d", &x);

    for (i = 0;i < n; i++)
    {
        if (a[i] == x)  
        {
            printf("%d is present at location %d.\n", x,i+1);
        }
    }
    
}