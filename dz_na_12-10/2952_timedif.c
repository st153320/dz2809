#include <stdio.h>

int main()
{
    int h1 = 0;
    int m1 = 0;
    int s1 = 0;
    int h2 = 0;
    int m2 = 0;
    int s2 = 0;

    scanf("%d", &h1);
    scanf("%d", &m1);
    scanf("%d", &s1);
    scanf("%d", &h2);
    scanf("%d", &m2);
    scanf("%d", &s2);

    printf("%d", (h2*3600+m2*60+s2) - (h1*3600+m1*60+s1));
    return 0;
}