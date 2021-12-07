#include <stdio.h>

int main()
{
    // operators precedance 1. * / %
    //                      2. +-
    //                      3. =
    int x = 4;
    int y = 3;
    printf("The value of 3*x - 8*y is %d\n", 3 * x - 8 * y);
    printf("The value of 3*x / 8*y is %d\n", 8 * x / 3 * y);
    return 0;
}