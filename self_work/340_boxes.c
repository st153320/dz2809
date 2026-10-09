#include <stdio.h>

int main()
{
    int x_1 = 0;
    int y_1 = 0;
    int z_1 = 0;

    int x_2 = 0;
    int y_2 = 0;
    int z_2 = 0;

    scanf("%d %d %d", &x_1, &y_1, &z_1);
    scanf("%d %d %d", &x_2, &y_2, &z_2);

    // first

    if (x_1 >= y_1) {
        if (y_1 >= z_1) {
            // x - max, y - av, z - min
            int x_0 = x_1;
            x_1 = z_1;
            z_1 = x_0;
        } else {
            // x_1 >= y_1 and y_1 < z_1 => x_1 >= y_1 < z_1 => ?
            if (x_1 >= z_1) {
                // x_1 >= y_1 and y_1 < z_1 and x_1 >= z_1 => x - max, y_1 - min, z_1 - av
                int z_0 = z_1;
                int y_0 = y_1;
                z_1 = x_1;
                y_1 = z_0;
                x_1 = y_0;
            } else {
                // x_1 >= y_1 and y_1 < z_1 and x_1 < z_1 => x_1 - av, y_1 - min, z_1 - max
                int y_0 = y_1;
                y_1 = x_1;
                x_1 = y_0;
            }
        }
    } else {
        // x < y
        // x < y and y < z x - min y - av z - max
        if (y_1 >= z_1) {
            // x_1 < y_1 and y_1 >= z_1 => x_1 < y_1 >= z_1 => ?
            if (x_1 >= z_1) {
                // x_1 < y_1 and y_1 >= z_1 and x_1 >= z_1 => x - av, y_1 - max, z_1 - min
                int z_0 = z_1;
                int x_0 = x_1;
                x_1 = z_0;
                z_1 = y_1;
                y_1 = x_0;
            } else {
                // x_1 < y_1 and y_1 >= z_1 and x_1 < z_1 => x_1 - min, y_1 - max, z_1 - av
                int y_0 = y_1;
                y_1 = z_1;
                z_1 = y_0;
            }
        }
    }

    // second 

    if (x_2 >= y_2) {
        if (y_2 >= z_2) {
            // x - max, y - av, z - min
            int x_0 = x_2;
            x_2 = z_2;
            z_2 = x_0;
        } else {
            // x_1 >= y_1 and y_1 < z_1 => x_1 >= y_1 < z_1 => ?
            if (x_2 >= z_2) {
                // x_1 >= y_1 and y_1 < z_1 and x_1 >= z_1 => x - max, y_1 - min, z_1 - av
                int z_0 = z_2;
                int y_0 = y_2;
                z_2 = x_2;
                y_2 = z_0;
                x_2 = y_0;
            } else {
                // x_1 >= y_1 and y_1 < z_1 and x_1 < z_1 => x_1 - av, y_1 - min, z_1 - max
                int y_0 = y_2;
                y_2 = x_2;
                x_2 = y_0;
            }
        }
    } else {
        // x < y
        // x < y and y < z x - min y - av z - max
        if (y_2 >= z_2) {
            // x_1 < y_1 and y_1 >= z_1 => x_1 < y_1 >= z_1 => ?
            if (x_2 >= z_2) {
                // x_1 < y_1 and y_1 >= z_1 and x_1 >= z_1 => x - av, y_1 - max, z_1 - min
                int z_0 = z_2;
                int x_0 = x_2;
                x_2 = z_0;
                z_2 = y_2;
                y_2 = x_0;
            } else {
                // x_1 < y_1 and y_1 >= z_1 and x_1 < z_1 => x_1 - min, y_1 - max, z_1 - av
                int y_0 = y_2;
                y_2 = z_2;
                z_2 = y_0;
            }
        }
    }

    if (x_1 == x_2 && y_1 == y_2 && z_1 == z_2) {

        printf("Boxes are equal");
    }
    // второй влезает в первый
    else if (x_1 >= x_2 && y_1 >= y_2 && z_1 >= z_2) {
        // параллельно оси X
        printf("The first box is larger than the second one");
    }
    else if (x_1 <= x_2 && y_1 <= y_2 && z_1 <= z_2)
    {
        printf("The first box is smaller than the second one");
    }
    else
    {
        printf("Boxes are incomparable");
    }
    // printf("\n");
    // for(int i=0; i<67; ++i)
    // {
    //     printf("*******  ******\n");
    //     printf("**           **\n");
    //     printf("*******     ** \n");
    //     printf("**   **    **  \n");
    //     printf("*******   **   \n");
    // }

    return 0;
}