#include <stdio.h>

void swapIntegers(int a, int b);

int main(void)
{

    int n1 = 0, n2 = 0;

    printf("Please enter the first value: \n");
    scanf("%d", &n1);

    
    printf("Please enter the second value: \n");
    scanf("%d", &n2);

    swapIntegers(n1, n2);

    return 0;
}

void swapIntegers(int a, int b)
{

    a = a ^ b;
    b = a ^ b;
    a = b ^ a;

    printf("The first value after swapping is: %d\n", a);
    printf("The second value after swapping is: %d\n", b);

}