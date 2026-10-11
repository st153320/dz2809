#include <stdio.h>

int main (){
    // a1 = 0, a2 = 1, a3 = 1, a4 = 2, a5 = 3, .... , an = a_n-2 + a_n-1
    int n = 0;
    scanf("%d", &n);

    switch (n){
        case 1: printf("0"); break;
        case 2: printf("1"); break;
    }

    if (n > 2){
        int a1 = 0;
        int a2 = 0;
        int an = 1;
        for (int i=3; i<=n; ++i){
            a1 = a2;
            a2 = an;
            an = a1 + a2;

        }
        printf("%d", an);
    }

    return 0;
}