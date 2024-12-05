#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    int n = 0; 


    printf("Please enter the dimensions of your square matrix (i.e the value of n, for the n*n square matrix where n must be odd): \n");
    scanf("%d", &n);

    int ray[n][n];

    if (n % 2 == 0)
    {
        printf("n must be odd.\n");
        printf("Exiting program.\n");
        return 1;
    }

    for (int m = 0; m < n; m++)
    {
        for (int x = 0; x < n; x++)
        {
            printf("Enter Element at [%d][%d]: \n", m, x);
            scanf("%d", &ray[m][x]);
        }
    }

    int sum = 0;
    int p1 = 1;
    int p2 = 1;

    for (int m = 0; m < n; m++)
    {
        p1 *= ray[m][m];
        
    }

    for (int m = 0; m < n; m++)
    {
        p2 *= ray[m][n - 1 - m];
    }

    sum = p1 + p2;

    printf("The calculated sum for the product of the diagonal elements is: %d\n", sum);

    return 0;
}

