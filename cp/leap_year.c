#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year to check if it's leap year or not\n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0){
        printf("Yes it is a leap year");
    }
        return 0;
}