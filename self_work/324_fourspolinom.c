#include <stdio.h>

int main()
{

    int a = 0;
    scanf("%d", &a);

    int firstpart = a / 100;
    int secondpart = (a % 10) * 10 + (a / 10) % 10;
    if (firstpart == secondpart)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}