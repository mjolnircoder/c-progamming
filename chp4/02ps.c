#include <stdio.h>

int main()
{
    int n = 10;
    printf("*******************8Multiplication table of 10**************\n\n");
    for (int i = 10; i; i--)
    {
        printf("10 X %d = %d\n", i, i * n); /* code */
    }

    return 0;
}