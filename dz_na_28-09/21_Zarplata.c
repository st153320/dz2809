#include <stdio.h>

int a = 0;
int b = 0;
int c = 0;

int main()
{
    scanf("%d %d %d", &a, &b, &c);

    int mx = 0;
    int mn = 0;

    if (a >= b) {
        mx = a;
        mn = b;
    } else {
        mx = b;
        mn = a;
    }
    if (c >= mx) {    mx = c;}
    if (c <= mn) {    mn = c;}

    printf("%d\n", mx-mn);
}