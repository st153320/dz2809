#include <stdio.h>

// 1 0 0 0 0 1
// 0 1 0 0 1 0
// 0 0 1 1 0 0
// 0 0 1 1 0 0
// 0 1 0 0 1 0
// 1 0 0 0 0 1


int main()
{

    int n = 0;
    scanf("%d", &n);

    int a = (n - 1) / 2;

    for (int i = 0; i < a; ++i)
    {
        for (int k = 0; k < i; ++k)
        {
            printf("0 ");
        }
        printf("1 ");

        for (int k = 0; k < (n - 2 * i - 2); ++k)
        {
            printf("0 ");
        }
        printf("1 ");

        for (int k = 0; k < i; ++k)
        {
            printf("0 ");
        }

        printf("\n");
    }

    for (int i = 0; i < (n - 2 * (n / 2) + 2 * ((n - 1) % 2)); ++i)
    {
        // (n-1)/2

        for (int i = 0; i < a; ++i)
        {
            printf("0 ");
        }

        // n = 5, f(n) = 1, n - 2*n/2 + 2*(n-1)%2 = 1.
        // n = 6, f(n) = 2, n - 2*n/2 + 2*(n-1)%2= 0
        // n/2

        for (int i = 0; i < (n - 2 * (n / 2) + 2 * ((n - 1) % 2)); ++i)
        {
            printf("1 ");
        }

        for (int i = 0; i < a; ++i)
        {
            printf("0 ");
        }
        printf("\n");
    }

    for (int i = a - 1; i >= 0; --i)
    {
        for (int k = 0; k < i; ++k)
        {
            printf("0 ");
        }
        printf("1 ");

        for (int k = 0; k < (n - 2 * i - 2); ++k)
        {
            printf("0 ");
        }
        printf("1 ");

        for (int k = 0; k < i; ++k)
        {
            printf("0 ");
        }

        printf("\n");
    }

    return 0;
}