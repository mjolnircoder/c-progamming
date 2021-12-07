#include <stdio.h>

int main()
{
    int mark[4];
    printf("Enter the value of marks 1\n");
    scanf("%d", &mark[0]);
    printf("Enter the value of marks 2\n");
    scanf("%d", &mark[1]);
    printf("Enter the value of marks 3\n");
    scanf("%d", &mark[2]);
    printf("Enter the value of marks 4\n");
    scanf("%d", &mark[3]);

printf("You have entered %d, %d ,%d and %d", mark[0], mark[1], mark[2], mark[3]);
    return 0;
}