#include <stdio.h>

int main()
{
    int size;

    printf("Please tell us the size of your array: \n");
    scanf("%d", &size);

    int random_num[size];
    int rand_num_counter[size];

    for (int m = 0; m < size; m++)
    {
        rand_num_counter[m] =  0;
    }

    printf("Please enter the data values you wish to feed to in the araay: \n");

    for (int m = 0; m < size; m++)
    {
        scanf("%d", &random_num[m]);
    }
    
    for (int m = 0; m < size; m++)
    {
        rand_num_counter[random_num[m]] += 1;
    }

    int r_num_counter = 0;
    int f_num_printer = 0;

    for (int m = 0 ; m < size; m++)
    {

        if (rand_num_counter[m] > 1)
        {   
            r_num_counter++;
        }   
    }

    if (!r_num_counter)                                                        //This condition can also be written as repeated_num == 0
    {                                                               
        {
            printf("None of the data element in the array occurs more than once.\n");
        }
    }
    else
    {   
        for (int n = 0; n < size; n++)
        {
            if ( (rand_num_counter[n] > 1) && f_num_printer == 0)             //Formatting for the first integer value in the array that repeats would 
            {                                                                 //be different.
                printf("Number %d", n);
                f_num_printer = 1;
            }
            else if (rand_num_counter[n] > 1)
            {
                printf(" and %d", n);
            }
        }
        printf(" occur in the array more than once.\n");
    }

    return 0;
}
