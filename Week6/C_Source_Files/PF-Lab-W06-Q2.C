#include <stdio.h>

// int main()
// {
//     int data;

//     printf("Please enter a number to chceck if it is a multiple digit number or not: \n");
//     scanf("%d", &data);

//     int count = 1;

//     while (data / 10 != 0)
//     {   
//         data = data / 10;
//         count = count + 1;
//     }

//     if (count <= 2)
//     {
//         printf("The number is not a multiple digit number....\n");
//     }
//     else 
//     {
//         printf("The number is a multiple digit number....\n");
//     }

//     return 0;

// }

// Done Via For Loop Construct
// Commented out version

int main()
{

    int value;
    int m;

    printf("Please enter a value to check if it is a multiple digit number or not: ");
    scanf("%d", &value);

    for (m = 1; value / 10 != 0; m++)
    {   
        value /= 10;
    } 

    if (m <= 2)
    {
        printf("The is not a multiple digit number....\n");
    }
    else 
    {
        printf("The number is a multiple digit number....\n");
    }

    return 0;

}