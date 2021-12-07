#include <stdio.h>

int main()
{ // sum of first n natural numbers
    int n = 10, sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    // int i = 0;
    // while (i <= n)
    // {
    //     /* code */
    //     sum += i;
    //     i++;
    // }

    printf("%d", sum);

    return 0;
}