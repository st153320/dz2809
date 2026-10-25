#include <stdio.h>
#define len 10000

int main()
{
    long long list[len];
    long long rev_list[len];
    int n = 0;
    scanf("%d", &n);

    // записываем в список
    for (size_t i = 0; i < n; ++i)
    {
        long long a = 0;
        scanf("%lld", &a);
        list[i] = a;
    }

    rev_list[0] = list[n-1];

    for (size_t i=0;i<n-1;++i){
        rev_list[i+1] = list[i];
        }


    for (size_t i = 0; i < n; ++i)
    {
        printf("%lld ", rev_list[i]);
    }

    return 0;
}