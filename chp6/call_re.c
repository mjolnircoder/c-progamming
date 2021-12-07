#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 4, y = 6;
    printf("The value before cbv of x and y is %d and %d\n", x, y);
    //wrong_swap(x, y); it will not work due to call by value
    swap(&x, &y); // will work due to call by refrence

    printf("The value of x and y is %d and %d\n", x, y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    a = temp;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}