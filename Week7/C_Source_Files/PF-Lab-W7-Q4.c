#include <stdio.h>

int main()
{
    int size;

    printf("Please enter the values that determine the size of the array: \n");
    scanf("%d", &size);

    int random_num[size];
    int distinct_num[size];
    int repeated_num[size];

    printf("Please insert the data values in the array: \n");

    for (int m = 0; m < size; m++)
    {
        scanf("%d", &random_num[size]);
    }

    for (int m = 0; m < size; m++)
    {   
        int rep_num_counter = 0;

        if (random_num[m] == random_num[m+1])
        {
            repeated_num[rep_num_counter] = random_num[m]; 
            rep_num_counter++; 
        }
        else 
        {
            
        }
    }
    

    return 0;
}