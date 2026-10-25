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

    for (size_t i=1;i<n;i+=2){
        long long b = list[i];
        list[i] = list[i-1];
        list[i-1] = b;
    }


    for (size_t i = 0; i < n; ++i)
    {
        printf("%lld ", list[i]);
    }

    return 0;
}