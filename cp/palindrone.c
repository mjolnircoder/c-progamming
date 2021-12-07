#include <stdio.h>

int main()
{
    int n, r, sum = 0, temp;
    printf("Enter the number to check if its a palindrone or not\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        /* code */
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("Its a palindrone number");
    }

    else
    {
        printf("Not a palindrone number");
    }
    return 0;
}