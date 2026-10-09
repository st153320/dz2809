#include <stdio.h>

// 0 1 2 3
// 1 1 2 3
// 2 2 2 3
// 3 3 3 3

int main()
{
    int a = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; ++i){
        for (int j=0; j < i; ++j){
            printf("%d ", i);
        }
        for (int j=i; j < a;++j){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}