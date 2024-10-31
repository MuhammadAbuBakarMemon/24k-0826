#include <stdio.h>

void e_or_o(int m);

int main(void)
{   
    
    int n = 0;
    
    printf("Please enter the number that you would like to check if the number is even or is it odd: ");
    scanf("%d", &n);

    e_or_o(n);

    return 0;
}

void e_or_o(int m)
{
    m % 2 == 0 ? printf("The number is an even number....") : printf("The given number is an odd number....");
}