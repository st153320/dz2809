#include <stdio.h>

int main(){
    int n = 0;
    int sum = 0;
// чтобы перевести dec в bin нужно делить на 2 и собирать остатки полученные остатки в обратном порядке записать в строчку   

    scanf("%d", &n);

    do {
        printf("%d", n % 2);
        n = n / 2;
    } while (n != 0);

    return 0;
}