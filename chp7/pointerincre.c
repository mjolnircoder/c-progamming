#include <stdio.h>

int main()
{
    int a = 78;
    int *ptr = &a;
    printf("The value of ptr is %d\n", ptr);
    ptr++;
    printf("The value of ptr is %d\n", ptr);
    ptr--;
    printf("The value of ptr is %d\n", ptr);
    int x = 5, y = 7;
    int *p = &y;
    int *q = &x;
    printf("p is %d\nq is %d\np - q is %d", p, q, (p - q));

    return 0;
}