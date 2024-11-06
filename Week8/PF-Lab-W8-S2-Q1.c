#include <stdio.h>

int main(void)
{

    int r_m = 0; 
    int c_m = 0;

    printf("Please enter the number of rows you would like in your original matrix: \n");
    scanf("%d", &r_m);

    if (r_m < 1)
    {
        printf("A matrix with lesser than 1 row(s) does not exist....\n");
        return 0;
    }
    
    printf("Please enter the number of columns you would like in your original matrix: \n");
    scanf("%d", &c_m);

    if (c_m < 1)
    {
        printf("A matrix with lesser than 1 column(s) does not exist....\n");
        return 0;
    }

    int ray[r_m][c_m];

    printf("Please start entering the data values in your matrix: \n");

    for (int m =  0; m < r_m; m++)
    {
        for (int n = 0; n < c_m; n++)
        {
            printf("Element at Row Number - %d, and Column Number -  %d: ", (m + 1), (n + 1));
            scanf("%d", &ray[m][n]);
        }
    }

    int t_ray[c_m][r_m];

    for (int m = 0; m < c_m; m++)
    {
        for (int n = 0; n < r_m; n++)
        {
            t_ray[m][n] = ray[n][m];
        }
    }

    printf("The transpose of your matrix is: \n");

    for (int m = 0; m < c_m; m++)
    {
        for(int n = 0; n < r_m; n++)
        {
            printf("%d ", t_ray[m][n]);
        }
        printf("\n");
    }

    return 0;
}