#include <stdio.h>

int main()
{   
    int year;
    printf("Please enter the year you would like to check the leap year for: \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year....", year);
    }

    return 0;
}