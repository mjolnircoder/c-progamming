#include <stdio.h>

int main()
{
    int a = 13, i = 2, prime = 0;

    // for (int i = 2; i < a; i++)
    // {
    //     if (a % i == 0)
    //     {
    //         prime = 1;
    //         break;
    //     }
    // }
    // if (prime == 1 )
    // {
    //     printf("This is not a prime number");
    //     /* code */
    // }
    // else
    // {
    //     printf("This is a prime number");
    // }

    while (i < a)
    {
        if (a % i == 0)
        {
            prime = 1;
            break;
        }
        if (prime == 1)
        {
            printf("This is not a prime number");
            /* code */
        }
        else
        {
            printf("This is a prime number");
        }
    }

    return 0;
}