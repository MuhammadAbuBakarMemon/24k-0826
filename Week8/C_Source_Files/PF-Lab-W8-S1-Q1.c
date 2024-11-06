#include <stdio.h>

int main(void)
{
    int rows = 0;

    printf("Please enter the number of rows you would like in your pattern: \n");
    scanf("%d", &rows);

    for (int m = 1; m <= rows; m++)
    {
        for (int n = 1; n <= m; n++)
        {
            printf("%d ", n);
        }
        printf("\n");
    }
    
    return 0;
}