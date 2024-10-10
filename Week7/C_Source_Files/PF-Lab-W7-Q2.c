#include <stdio.h>

int main()
{

    int len;

    printf("Please specify the number of values you would like to input: ");
    scanf("%d", &len);

    int arr[len];
    
    for (int m = 0; m < len; m++)
    {
        printf("Please enter the data element at index position %d: ", m);
        scanf("%d", &arr[m]);
    }

    int rev_arr[len];

    int rev_arr_counter = 0;

    for (int m = (len - 1); m >= 0; m--)
    {   
        rev_arr[rev_arr_counter] = arr[m];
        rev_arr_counter++;  
    }

    printf("The Array in reverse order would be: ");

    for (int m = 0; m < len; m++)
    {
        printf("%d ", rev_arr[m]);
    }

    return 0;
}