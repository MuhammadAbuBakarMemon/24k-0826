#include <stdio.h>

int main()
{
    int len, sum = 0;

    printf("Please enter the length of array that you would like to create and input values to: \n");
    scanf("%d", &len);
    int array[len];

    printf("Enter the data elements to the array: \n");

    for(int m = 0; m < len; m++)
    {
        scanf("%d", &array[m]);
    }

    for (int m = 0; m < 9; m += 1)
    {
        sum += array[m];
    }

    printf("The sum of all elements is: %d\n", sum);
    
    return 0;
}