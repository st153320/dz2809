#include <stdio.h>

int main() {
    int x_1 = 0;
    int y_1 = 0;
    int x_2 = 0;
    int y_2 = 0;

    scanf("%d %d", &x_1, &y_1);
    scanf("%d %d", &x_2, &y_2);

    int dx = x_2 - x_1 < 0 ? x_1 - x_2 : x_2 - x_1;
    int dy = y_2 - y_1 < 0 ? y_1 - y_2 : y_2 - y_1;

    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}