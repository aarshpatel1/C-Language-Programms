#include <stdio.h>

void main()
{
    int i, j, k, n, c;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }

        c = 1;

        for (j = 0; j <= i; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
}