#include <stdio.h>

int sum(int a, int b);
int main()
{
    int c;
    c = sum(3, 5);
    printf("The value is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}