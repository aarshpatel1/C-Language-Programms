#include <stdio.h>

void main()
{
    int i, n, isPrime = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
        printf("This is not a prime number");
    else
        printf("This is a prime number");
}