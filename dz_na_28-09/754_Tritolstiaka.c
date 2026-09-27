#include <stdio.h>

int a = 0;
int b = 0;
int c = 0;

int main()
{
    scanf("%d %d %d", &a, &b, &c);

    int mx = a >= b ? a : b;
        mx = c >= mx ? c : mx;
    int mn = a <= b ? a : b;
        mn = c <= mn ? c : mn;

    if (mn >= 94 && mx <= 727)
    {
        printf("%d\n", mx);
        return 0;
    }
    else
    {
        printf("Error\n");
    }
}