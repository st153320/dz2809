#include <stdio.h>

int main() {
    int x_1 = 0;
    int y_1 = 0;
    int x_2 = 0;
    int y_2 = 0;

    int x_a = 0;
    int y_a = 0;

    scanf("%d %d %d %d", &x_1, &y_1, &x_2, &y_2);
    scanf("%d %d", &x_a, &y_a);

    if (x_1 == x_2)
    {
        // параллельно оси Y
        int sim_x = x_a + 2*(x_1 - x_a);
        printf("%d %d", sim_x, y_a);
    }
    else if (y_1 == y_2) {
        // параллельно оси X
        int sim_y = y_a + 2*(y_1 - y_a);
        printf("%d %d", x_a, sim_y);
    }

    return 0;
}