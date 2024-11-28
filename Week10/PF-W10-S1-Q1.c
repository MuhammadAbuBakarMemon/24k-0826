#include <stdio.h>

int sum_of_digits(int m);

int main(void)
{

    int num = 0;

    printf("Please enter the numbr you would like the sum of digits of: \n");
    scanf("%d", &num);

    printf("The sum of digit of your number is: %d\n", sum_of_digits(num));

    return 0;
}       

int sum_of_digits(int m)
{   

    static int sum = 0;

    if (m == 0)
    {
        return sum;
    }

    // sum += m % 10;
    return (m % 10) + sum_of_digits(m / 10) ;
}