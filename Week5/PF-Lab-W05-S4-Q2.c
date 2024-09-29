#include <stdio.h>

int main()
{   
    int binnum, count = 0;
    printf("Please enter your number: \n");
    scanf("%d", &binnum);

    while (binnum > 0)
    {
        count += (binnum || 0);             // We can use the OR or AND either of the bitwise operators at our disposal
        binnum >>= 1;                       // If AND is used it shoudd be used with 1
    }

    printf("The total number of 1's are: %d\n", count);
}

