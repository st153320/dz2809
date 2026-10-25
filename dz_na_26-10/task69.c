#include <stdio.h>
#define len 10000

int main()
{
    long long list[len];
    int n = 0;
    scanf("%d", &n);

    // записываем в список
    for (size_t i = 0; i < n; ++i)
    {
        long long a = 0;
        scanf("%lld", &a);
        list[i] = a;
    }

    for (size_t i=0;i<(n+1)/2;++i){
        long long b = list[i];
        list[i] = list[n-i-1];
        list[n-i-1] = b;
    }

    for (size_t i = 0; i < n; ++i)
    {
        printf("%d ", list[i]);
    }

    return 0;
}