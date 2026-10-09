#include <stdio.h>

long long x_1 = 0;
long long y_1 = 0;


int main()
{
    scanf("%d %d", &x_1, &y_1);

    if (x_1 == 1 && y_1 == 1){
        printf("0");
    }
    else if (x_1 == 1 || y_1 == 1)
    {
        printf("1");
    } else if (x_1 == y_1) {
        printf("2");
    } else if (x_1 != y_1){
        printf("1");
    }

    return 0;
}