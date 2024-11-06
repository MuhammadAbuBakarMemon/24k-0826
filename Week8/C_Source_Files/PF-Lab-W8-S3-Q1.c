#include <stdio.h>

int main(void)
{

    int pg = 0;
    int rows = 0;
    int cols = 0;

    printf("Enter the number of pages you want: \n");
    scanf("%d", &pg);

    if (pg < 0)
    {
        printf("There must be a minimum of 1 page in your program to run: \n");
        return 0;
    }

    printf("Enter the number of rows that you desire to have on each page: \n");
    scanf("%d", &rows);

    if (rows < 0)
    {
        printf("There must be a minimum of 1 row in your matrix to the page: \n");
        return 0;
    }

    printf("Enter the number of columns that you desire to have on each page: \n");
    scanf("%d", &cols);

    if (cols < 0)
    {
        printf("There must be a minimum of 1 column in your matrix to the page: \n");
        return 0;
    }
    
    int ray[pg][rows][cols];

    //Taking values as input from the user 
    // for (int m = 0; m < pg; m++)
    // {
    //     printf("Page Number %d Begins Here....\n", m + 1);

    //     for (int n = 0; n < rows; n++)
    //     {
    //         for (int o = 0; o < cols; o++)
    //         {
    //             printf("Page Number [%d], Row Number [%d], Column Number [%d], Element - ", m + 1, n + 1, o + 1);
    //             scanf("%d", &ray[m][n][o]);
    //         }
    //     }

    //     printf("Page Number %d Ends Here....\n", m + 1);
    // }

    //Initializing values in the array, and print them do the user has 
    //knowledge of what values the program is operating on

    int value = 1;

    for (int m = 0; m < pg; m++)
    {
        for (int n = 0; n < rows; n++)
        {
            for (int o = 0; o < cols; o++)
            {
                ray[m][n][o] = value++;
            }
        }
    }

    printf("You are viewing your matrix's initialized values....\n");

    for (int m = 0; m < pg; m++)
    {
        printf("Page Number [%d] Begins Here: \n");
        for (int n = 0; n < rows; n++)
        {
            for (int o = 0; o < cols; o++)
            {
                printf("Page Number [%d], Row Number [%d], Column Number [%d], Element - %d\n", m + 1, n + 1, o + 1, ray[m][n][o]);
            }
        }
        printf("Page Number [%d] Ends Here....\n", m + 1);

    }

    for (int m = 0; m < pg; m++)
    {
        int sum = 0;

        for (int n = 0; n < rows; n++)
        {
            for (int o = 0; o < cols; o++)
            {
                sum += ray[m][n][o];
            }
        }

        printf("The sum of elements on page number %d is: %d\n", m + 1, sum);
    }

    return 0;
}