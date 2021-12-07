#include <stdio.h>
int pg(int *a);
int main()
{
    int q = 5;
    printf("The new value of a is %d", pg(&q));
    return 0;
}
int pg(int *a)
{
    int c = 10 * (*a);
    return c;
}