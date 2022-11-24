// assending sorting
#include<stdio.h>
#include<stdlib.h>
int i, j, n, temp;
int a[100];
void sorting()
{
    printf("Enter Size Of Array : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("\n  %d" , a[i]);
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    printf("\n\n");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
int main()
{
    sorting();
}

/* Dissending sorting
#include<stdio.h>
#include<stdlib.h>
int i, j, n, temp;
int a[100];
void sorting()
{
    printf("Enter Size Of Array : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("\n  %d" , a[i]);
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    printf("\n\n");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
int main()
{
    sorting();
}*/