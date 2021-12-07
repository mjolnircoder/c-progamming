#include <stdio.h>

int main()
{
    int a = 34;
    int *j = &a; // now j will store the address of a
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *j);
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The address of j is %u\n", *(&j));
    return 0;
}
//The value of a is 34
// The value of a is 34
// The address of a is 6422220
// The address of a is 6422220
// The address of j is 6422216
// The address of j is 6422220