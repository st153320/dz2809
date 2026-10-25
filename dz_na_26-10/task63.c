#include <stdio.h>
#define len 10000

int main(){
    int list[len];
    int n = 0;
    scanf("%d", &n);

    // записываем в список
    for (size_t i=0; i<n;++i){
        int a = 0;
        scanf("%d", &a);
        list[i] = a;
    }


    for(size_t i=0;i<n;i+=2){
        printf("%d ", list[i]);
    }

    return 0;
}