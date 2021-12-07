#include <stdio.h>

int main()
{
    int a;
   // b = a;
    //wrong

    int v = 3^3;
    printf("v %d", v);

    //Q3.
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test %d\n", num%97);
    return 0;
}