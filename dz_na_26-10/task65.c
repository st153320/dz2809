#include <stdio.h>
#define len 10000

int main(){
    long long list[len];
    int n = 0;
    int pos = 0;
    scanf("%d", &n);

    // записываем в список
    for (size_t i=0; i<n;++i){
        long long a = 0;
        scanf("%lld", &a);
        list[i] = a;
    }


    for(size_t i=0;i<n;++i){
        if (list[i] > 0){ pos++;}
    }
    printf("%d", pos);

    return 0;
}