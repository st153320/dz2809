#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a == 0 && b == 0){
        printf("INF");
    } else if ((a == 0 && b != 0) || (b % a != 0)) {
        printf("NO");
    } else {
        printf("%d", -b/a);
    }

    return 0;
}