#include <stdio.h>

int main()
{   
    int num, tempnum, result = 0;
    printf("Please enter your number: \n");
    scanf("%d", &num);

    while (num != 0)
    {
        tempnum = num % 10;        
        result += tempnum;
        num /= 10;
    }

    printf("The sum of the digits composed of the number is: %d", result);

    return 0;
}