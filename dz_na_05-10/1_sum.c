#include <stdio.h>

//1. Сумма и факториал — прочитать N, вывести 1 + 2 + . . . + N и N!. Два цикла. Для факториала — long long.

int main(){
    int n = 0;
    int sum = 0;
    long long fuct = 1;

    scanf("%d", &n);

    for (int i=1; i<=n; ++i){
        // считаем сумму
        sum += i;    
    }

    for (int i=1; i<=n; ++i){
        // считаем сумму
        fuct *= i;    
    }

    printf("%d %lld", sum, fuct);

    return 0;
}