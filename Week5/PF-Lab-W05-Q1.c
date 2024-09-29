#include <stdio.h>

int main()
{   
    int n1, n2, n3;
    printf("Please enter the first number: \n");
    scanf("%d", &n1);
    printf("Please enter the second number: \n");
    scanf("%d", &n2);
    printf("Please enter the second number: \n");
    scanf("%d", &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("The greatest number is: %d\n", n1);
        }
        else 
        {
            printf("The greatest number is: %d", n3);
        }
    }
    else 
    {
        if (n2 > n3)
        {
            printf("The greatest number is: %d", n2);
        }
        else 
        {
            printf("The greatest number is: %d", n3);
        }
    }

    return 0;
}