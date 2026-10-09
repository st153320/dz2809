#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a*b == c){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}