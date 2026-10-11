#include <stdio.h>

int main(){
    int n = 0;
    double res = 0;
    scanf("%d", &n);

    for (int i=0; i<=n; ++i){
        res += n % 2 == 0 ? (double)1/(2*n+1) : (double)(-1)/(2*n+1);
    }
    printf("%f", 4*res);

    return 0;
}