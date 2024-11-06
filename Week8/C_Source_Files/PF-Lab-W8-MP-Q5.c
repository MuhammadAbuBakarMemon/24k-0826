#include <stdio.h>

int main(void)
{

    int r = 4;

    // For Loop that prints the upper half

    for (int m = 1; m <= r; m++)
    {
        for (int n = 1; n <= (r - m); n++)
        {
            printf(" ");
        }

        for (int n = 1; n <= (2*m - 1); n++)
        {
            if (n % 2 == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for (int n = 1; n <= (r - m); n++)
        {
            printf(" ");
        }

        printf("\n");
    }


    // For loop that prints the lower half

    for (int m = r - 1; m > 0; m--)
    {

        for (int n = 1; n <= (r - m); n++)
        {
            printf(" ");
        }

        for (int n = 1; n <= (2*m - 1); n++)
        {
            if (n % 2 == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for (int n = 1; n <= (r - m); n++)
        {
            printf(" ");
        }

        printf("\n");

    }

    return 0;
}