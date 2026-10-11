#include <stdio.h>

int main (){
    int n = 0;
    scanf("%d", &n);
    int op_n = 0;
    
    while (n != 0){
        op_n = op_n*10 + (n % 10);
        n /= 10;
    }
    
    printf("%d", op_n);
    return 0;
}