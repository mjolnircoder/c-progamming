#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter the number to find its factorial\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        /* code */
    }
    printf("%d", factorial);
    return 0;
}