#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);

    int **m = (int **)malloc(y * sizeof(int *));
    if (m == NULL) {
        return 1;
    }

    for (int i = 0; i < y; ++i) {
        m[i] = (int *)malloc(x * sizeof(int));
        if (m[i] == NULL) {
            return 1;
        }
    }

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            int res = 0;
            int di = y - i - 1 > i ? i : y - i - 1;
            int dj = x - j - 1 > j ? j : x - j - 1;
            int n = dj < di ? dj : di;

            int lastf = (2 * x + 2 * y - 4) * n - 4 * (n * (n - 1));

            int yn = y - 2 * n;
            int xn = x - 2 * n;
            int in = i - n;
            int jn = j - n;

            if (in == 0) {
                res = jn + 1;
            } else if (jn == xn - 1) {
                res = xn + in;
            } else if (in == yn - 1) {
                res = 2 * xn + yn - 2 - jn;
            } else if (jn == 0) {
                res = 2 * xn + 2 * yn - 4 - in + 1;
            }

            res += lastf;

            m[i][j] = res;
            // printf("%3d ", res);
        }
        // printf("\n");
    }

    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < y; ++i) {
        free(m[i]);
    }
    free(m);
    return 0;
}