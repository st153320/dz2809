#include <stdio.h>

int x_1 = 0;
int y_1 = 0;
int x_2 = 0;
int y_2 = 0;


int main()
{
    scanf("%d %d", &x_1, &y_1);
    scanf("%d %d", &x_2, &y_2);

    int dx = x_2 - x_1 < 0 ? x_1 - x_2 : x_2 - x_1;
    int dy = y_2 - y_1 < 0 ? y_1 - y_2 : y_2 - y_1;

    if ((x_1 == x_2 || y_1 == y_2) || dx == dy)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}