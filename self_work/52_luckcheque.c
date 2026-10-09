#include <stdio.h>

int main(){

    int a = 0;
    // a = XXX-XXX
    scanf("%d", &a);

    int secondsum = a % 10 + (a / 10) % 10 + (a/100)% 10;
    int firstsum = (a / 1000) % 10 + (a / 10000) % 10 + (a / 100000) % 10;

    if (secondsum == firstsum){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}