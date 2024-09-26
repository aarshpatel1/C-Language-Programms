#include <stdio.h>

void main()
{

    int i, n, fibonacciSeries[100] = {0, 1};

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        fibonacciSeries[i] = fibonacciSeries[i - 1] + fibonacciSeries[i - 2];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacciSeries[i]);
    }
}