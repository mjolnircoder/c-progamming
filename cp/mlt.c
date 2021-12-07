#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number whose multiplication table to be printed\n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d x %d = %d\n", num, i + 1, num * (i + 1));
    }

    return 0;
}