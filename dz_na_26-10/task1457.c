#include <stdio.h>
#define len 10000

int main()
{
    long long list[len];

    int n = 0;
    int a = 0;
    int b = 0;
    int a1 = 0;
    int b1 = 0;

    scanf("%d %d %d %d %d", &n, &a, &b, &a1, &b1);

    // записываем в список
    for (size_t i = 1; i <= n; ++i)
    {
        list[i-1] = i;
    }

    // первая подпоследовательность
    for (size_t i=0;i<(b-a+1)/2;++i){
        long long bx = list[a-1+i];
        list[a-1+i] = list[b-i-1];
        list[b-i-1] = bx;
    }

    // вторая подпоследовательность
    for (size_t i=0;i<(b1-a1+1)/2;++i){
        long long bx = list[a1-1+i];
        list[a1-1+i] = list[b1-i-1];
        list[b1-i-1] = bx;
    }

    for (size_t i=0;i<n;++i){
        printf("%lld", list[i]);
    }

    return 0;
}