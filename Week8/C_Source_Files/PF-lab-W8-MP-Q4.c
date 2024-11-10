#include <stdio.h>

int main(void)
{

    int r1 = 0;
    int c1 = 0;
    int r2 = 0;
    int c2 = 0;

    printf("Please enter the number of rows for your first matrix: \n");
    scanf("%d", &r1);

    if (r1 < 1)
    {
        printf("The minimum number of rows in a matrix must be 1....\n");
        return 0;
    }

    printf("Please enter the number of columns for your first matrix: \n");
    scanf("%d", &c1);

    if (c1 < 1)
    {
        printf("The minimum number of columns in a matrix must be 1....\n");
        return 0;
    }

    int mat1[r1][c1];

    for (int m  = 0; m < r1; m++)
    {
        for (int n = 0; n < c1; n++)
        {
            printf("Element [%d][%d]: \n", m, n);
            scanf("%d", &mat1[m][n]);
        }
    }

    printf("Please enter the number of rows for your second matrix: \n");
    scanf("%d", &r2);

    if (r2 < 1)
    {
        printf("The minimum number of rows in a matrix must be 1....\n");
        return 0;
    }

    printf("Please enter the number of columns for your second matrix: \n");
    scanf("%d", &c2);

     if (c2 < 1)
    {
        printf("The minimum number of columns in a matrix must be 1....\n");
        return 0;
    }

    int mat2[r2][c2];

    for (int m  = 0; m < r2; m++)
    {
        for (int n = 0; n < c2; n++)
        {
            printf("Element [%d][%d]: \n", m, n);
            scanf("%d", &mat2[m][n]);
        }
    }

    //condition to check if matrix multiplication is valid or not?

    if (c1 != r2)
    {
        printf("Unfortunately, the desired matrix multiplication can not go through as the number of column in the first matrix are not equal to the number of rows in the second matrix....\n");
        return 0;
    }

    //Matrix Multiplication

    int rmat[r1][c2];    

    for (int m = 0; m < r1; m++)
    {
        for(int n = 0; n < c2; n++)
        {
            rmat[m][n] = 0;
        }
    }                                                                                        

    for (int m = 0; m < r1; m++)
    {   
        for (int n = 0; n < c2; n++)
        {
            for (int x = 0; x < c1; x++)
            {
                rmat[m][n] += mat1[m][x] * mat2[x][n];
            }
        }        
    }


    printf("The resultant Matrix after multiplication is: \n");

    for (int m = 0; m < r1; m++)
    {
        for (int n = 0; n < c2; n++)
        {
            printf("Element [%d][%d]: %d\n", m, n, rmat[m][n]);
        }
    }

    return 0;
}