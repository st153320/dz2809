#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    int fsum = 0;
    int ssum = 0;
    

    for (int i = 0; i < 4; ++i){
        scanf("%d %d", &a, &b);
        fsum += a;
        ssum += b;
    }

    if (fsum == ssum){
        printf("DRAW");
    } else if (fsum > ssum){
        printf("1");
    } else {
        printf("2");
    }

    return 0;
}