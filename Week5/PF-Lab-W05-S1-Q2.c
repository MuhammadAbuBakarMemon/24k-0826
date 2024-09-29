#include <stdio.h>

int main()
{   
    int value;

    printf("Please enter your value: \n");
    scanf("%d", &value);

    if (value == 0)
    {
        printf("The number is zero....\n");
    }
    else if (value < 0)
    {
        printf("The value is negative....\n");
    }
    else
    {
        if (value % 2 == 0)
        {
            printf("The number is positive and even...\n");
        }
        else 
        {
            printf("The number is positive and odd....\n");
        }
    }
    return 0;
}