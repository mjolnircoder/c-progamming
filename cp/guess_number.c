#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand() % 100 + 1; // generates random number bw 1 to 100
    // printf("The number is %d\n", number);

    do
    {
        printf("Guess the number bw 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed in %d attempts\n", nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}