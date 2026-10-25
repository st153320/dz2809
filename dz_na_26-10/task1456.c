#include <stdio.h>
#define len 10000

int main()
{
    long long list[len];
    long long height = 0;
    int n = 0;
    scanf("%d", &n);

    // записываем в список
    for (size_t i = 0; i < n; ++i)
    {
        long long a = 0;
        scanf("%lld", &a);
        list[i] = a;
    }

    scanf("%lld", &height);

    for (int i=0;i<n;++i){
        if (list[i] < height){printf("%d", i+1); break;}
    }

    return 0;
}