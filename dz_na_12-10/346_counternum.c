#include <stdio.h>

int main(){
    long long n = 0;
    long long zeros = 0;
    long long neg = 0;
    long long pos = 0;

    scanf("%lld", &n);

    for (long long i = 0; i<n; ++i){
        int now = 0;
        scanf("%lld", &now);
        if (now == 0){
            ++zeros;
        } else if (now > 0){
            ++pos;
        } else {
            ++neg;
        }
    }

    printf("%lld %lld %lld", zeros, pos, neg);
    
    return 0;
}