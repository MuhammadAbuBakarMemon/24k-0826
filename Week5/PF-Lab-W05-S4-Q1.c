#include <stdio.h>

/*
BITWISE XOR 
Number XOR 0 -> The number as it is
Number XOR 1 -> The number subtracted from 1
Number XOR Number itself -> 0
Number XOR Number's compliment -> -1
*/

int main()
{   
    int n1,n2;
    printf("Please enter your 1st number: \n");
    scanf("%d", &n1);
    printf("Please enter your 2nd number: \n");
    scanf("%d", &n2);

    printf("The swapped 1st number is: %d\n", n2^0);
    printf("The swapped 2nd number is: %d\n", n1^0);
    
    return 0;
}

