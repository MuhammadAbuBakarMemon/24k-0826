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

    sum += m % 10;
    return sum_of_digits(m / 10);
}

// another variant for the same code below, both work absolutely fine

// #include <stdio.h>

// int s_o_n(int n);

// int main(void)
// {

//     int num = 0;

//     printf("Please enter the number you would like to calculate the sum of digits of: \n");
//     scanf("%d", &num);

//     printf("The sum of your digits is: %d\n", s_o_n(num));

//     return 0;
// }

// int s_o_n(int n)
// {

//     if (n == 0)
//     {
//         return 0;
//     }

//     return (n % 10) + s_o_n(n / 10);
// }