#include <stdio.h>

int main()
{   
    float number;
    printf("Please enter a number to check for: \n");
    scanf("%f", &number);

    number == 0 ? printf("The number is zero....\n") : number > 0 ? printf("The number is a positive number....") : printf("The number is a negative number....\n");
  
    return 0;
}