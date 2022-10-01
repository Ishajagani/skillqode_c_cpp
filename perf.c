#include <stdio.h>
int isPerfect(int num)
{
    int i, sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        return 1; /*Perfect Number*/
    else
        return 0; /*Not Perfect Number*/
}

int main()
{
    int num, i;
    int sum;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("%d is a perfect number.", num);
    else
        printf("%d is not a perfect number.", num);

    return 0;
}