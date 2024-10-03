#include <stdio.h>
#include <math.h>

int main()
{   
    int value, factor_count = 0;

    printf("Please enter a nuumber to check if it is a prime or a composite number: \n");
    scanf("%d", &value);

    if (value < 2)
    {
        printf("The value entered is niether prime nor composite....\n");
        return 0;
    }

    for (int m = 2; m <= (value / 2); m++)       // We can either use the power function or the sqrt function  but before the invocation of these functions it is imperative that we use the math.h library
    {                                            // As these functons exist in the math.h library and not the stdio.h header file
        if (value % m == 0)
        {
            factor_count += 1;
            break;
        }
    }

    if (factor_count == 0)
    {
        printf("The number is a prime number....\n");
    }
    else 
    {
        printf("The number is a composite number....\n");
    }

    return 0;
}