#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        int tmp = i;
        int op_tmp = 0;
        while (tmp != 0){
            op_tmp = 10*op_tmp + (tmp % 10);
            tmp /= 10;
        }
        
        if (op_tmp == i){
            sum += 1;
        }
    }

    printf("%d", sum);
    return 0;
}