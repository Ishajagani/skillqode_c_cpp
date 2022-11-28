#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, n, t;
    printf("Enter Size Of Array : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d\t", a[i]);
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    printf("\n\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
}
