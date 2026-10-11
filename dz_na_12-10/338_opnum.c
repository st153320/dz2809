#include <stdio.h>

int main(){
    long long n = 0;
    long long op_n = 0;
    scanf("%lld", &n);

    do {
        op_n = 10*op_n + (n % 10);
        n /= 10;
    } while (n != 0);

    printf("%lld", op_n);

    return 0;
}