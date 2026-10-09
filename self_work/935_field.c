#include <stdio.h>

int main() {
    int x_1 = 0;
    int y_1 = 0;
    int x_2 = 0;
    int y_2 = 0;

    scanf("%d %d", &x_1, &y_1);
    scanf("%d %d", &x_2, &y_2);

    if ((y_1 % 2 == 1 && x_1 % 2 == 0) || (y_1 % 2 == 0 && x_1 % 2 == 1)) {
        if ((y_2 % 2 == 1 && x_2 % 2 == 0) || (y_2 % 2 == 0 && x_2 % 2 == 1)) {
            printf("YES");
        } else {
            printf("NO");
        }
    
    } else{
        if ((y_2 % 2 == 0 && x_2 % 2 == 0) || (y_2 % 2 == 1 && x_2 % 2 == 1)) {
            printf("YES");
        } else {
            printf("NO");
        }
    }

    return 0;
}