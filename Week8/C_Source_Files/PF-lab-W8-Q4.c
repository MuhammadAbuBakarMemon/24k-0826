#include <stdio.h>

int main(void)
{

    int r1 = 0;
    int c1 = 0;
    int r2 = 0;
    int c2 = 0;

    printf("Please enter the number of rows and columns you would like to have in your frst matrix, respectively: ");
    scanf("%d %d", &r1, &c1);

    printf("Please enter the number of rows and columns you would like to have in your second matrix, respectively: ");
    scanf("%d %d", &r2, &c2);

    //checking that the number of rwos and co;umns in both matrices are greater than zero, because a matrix must have a minimum of one row and onr column

    if (r1 < 1 || r2 < 1 || c1 < 1 || c2 < 1)
    {   
        printf("Both the matrices must each have at least a minimun of 1 row and 1 column....");
        return 0;
    }

    //checking condition that must be satisfied to multiply two matrix

    if (c1 != r2)
    {
        printf("The matrix multiplication can not take place/the attempted multiplication operation is invalid as the number of columns in your first matrix do not match the number of rows in your second matrix....");
        return 0;
    }

    int mat1[r1][c1]; 
    int mat2[r2][c2];

    int r_mat[r2][c1];

    printf("Please enter the data values that you would like to input in your first matrix: \n");

    for (int m = 0; m <= 2; m++)
    {
        for (int n = 0; n <= 2; n++)
        {
            printf("Element at row no# %d and column number %d: \n", m, n);
            scanf("%d", &mat1[m][n]);
        }
    }

    printf("\n");

    printf("Please enter the data values that you would like to input in your second matrix: \n");

    for (int m = 0; m <= 2; m++)
    {
        for (int n = 0; n <= 2; n++)
        {
            printf("Element at row no# %d and column number %d: \n", m, n);
            scanf("%d", &mat2[m][n]);
        }
    }

    //Matrix multipluication

    for (int m = 0; m < r2; m++)
    {
        for (int n = 0; n < c1; n++)
        {
            for (int o = 0; o = m; o++)
            {
                for (int p = 0; p < c1; p++)
                {
                    r_mat[m][n] = 
                }
            }
            r_mat[m][n] = mat1[m][n] * mat2[m][n];
        }
    }

    //outputing/printing the resultant matrix

    for (int m = 0; m <= 2; m++)
    {
        for (int n = 0; n <= 2; n++)
        {
            printf("Element at row no# %d and column number %d is: %d\n", m, n, r_mat[m][n]);
        }
    } 

    return 0;
}
