#include <stdio.h>
#include <math.h>

void is_p(int n);

int main(void)
{

    int n = 0;

    printf("Please enter the number you would like to check for as a potential prime number: \n");
    scanf("%d", &n);

    is_p(n);

    return 0;
}

void is_p(int n)
{

    if (n <= 1)
    {
        printf("Prime numbers can only be positive integers that are greater than 1....\n");
        return;
    }

    int f_c = 0;

    for (int m = 2; m <= sqrt(n); m++)
    {
        if (n % m == 0)
        {
            f_c++;
            break;
        }
    }

    if (!f_c)
    {
        printf("The entered number is a prime number....");
    }
    else
    {
        printf("The entered number is not a prime number....");
    }
}