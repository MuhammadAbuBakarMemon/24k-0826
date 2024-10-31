#include <stdio.h>

int product(int m, int n);

int main(void)
{   
    
    int n1 = 0;
    int n2 = 0;
    
    printf("Please enter your first number: ");
    scanf("%d", &n1);

    printf("Please enter your second number: ");
    scanf("%d", &n2);

    printf("The product of the two numbers is: %d", product(n1, n2));

    return 0;
}

int product(int m, int n)
{
    return m * n;
}