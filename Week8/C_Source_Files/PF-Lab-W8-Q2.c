#include <stdio.h>

int main()
{   
    int u_bound = 0;

    printf("Kindky enter a number to start from, taking it as your maximum value: ");
    scanf("%d", &u_bound);

    for (int m = u_bound; m > 0; m--)
    {
        if (m % 2 == 1)
        {
            for (int n = 0; n < m; n++)
            {
                printf("%d ", m);
            }
        }
        printf("\n"); 
    }
    return 0;
}