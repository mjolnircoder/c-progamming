#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number\n", a);
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even", a);
    }

    else
    {
        printf("%d is odd", a);
    }
// int k=3.0/9;
// printf("%d", k);
    return 0;
}