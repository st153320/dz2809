#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int max_side = a > b ? a: b;
    max_side = max_side > c ? max_side : c;

    if (max_side == a){
        a = c;
        c = max_side;
    } else if (max_side == b){
        b = c;
        c= max_side;
    }

    if (a+b > c){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}