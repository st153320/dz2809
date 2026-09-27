#include <stdio.h>

int main()
{
    int x_1 = 0;
    int y_1 = 0;
    int r_1 = 0;
    int x_2 = 0;
    int y_2 = 0;
    int r_2 = 0;

    scanf("%d %d %d", &x_1, &y_1, &r_1);
    scanf("%d %d %d", &x_2, &y_2, &r_2);

    int dx = x_2 - x_1;
    int dy = y_2 - y_1;
    int dist = dx * dx + dy * dy;

    if ((dist <= (r_1 + r_2) * (r_1 + r_2)) && (dist >= (r_2 - r_1) * (r_2 - r_1)))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}