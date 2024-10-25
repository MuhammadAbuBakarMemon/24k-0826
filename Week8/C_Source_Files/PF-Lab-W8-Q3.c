#include <stdio.h>

int main(void)
{

    int r = 0; 
    int c = 0;

    printf("Determine the number of rows of your matrix: ");
    scanf("%d", &r);
    printf("Determine the number of columns of your matrix: ");
    scanf("%d", &c);

    if (r < 1 || c < 1)
    {
        printf("A matrix can not have null rows or null columns.....");
        return 0;
    }

    int mat[r][c];

    for (int m = 0; m < r; m++)
    {
        for (int n = 0; n < c; n++)
        {
            printf("Element at Row Number %d Column Number %d: ", m, n);
            scanf("%d", &mat[m][n]);
        }
    }

    int s_pt_counter = 0;

    for (int m = 0; m < r; m++)
    {   
        int s_v_r = 0;
        int s_v = 999;                  //Assuming that from any value the user inputs, the smallest value will be smaller than 999
        int l_v = -999;                 //Assuming that from any value the user inputs, the largest value will be greater than -999
        int l_v_c = 0;

        for (int n = 0; n < c; n++)
        {
            if (mat[m][n] < s_v)
            {
                s_v = mat[m][n];
                s_v_r = n;
            }
        }

        int s_pt_flag = 0;

        for (int o = 0; o < r; o++)
        {
            if (mat[o][s_v_r] <= s_v)
            {
                s_pt_flag = 1;

            }
            else
            {
                s_pt_flag = 0;
                break;
            }
        }

        if (s_pt_flag == 1)
        {   
            s_pt_counter += 1;
            printf("The %d saddle point in the matrix is: %d, which exits in the matrix at Row Index Position: %d and Column Index Position: %d", s_pt_counter, mat[m][s_v_r], m, s_v_r);
        }
    }

    if (s_pt_counter == 0)
    {
        printf("Unfortunaely, the matrix you provided consists of no saddle point....");
    }

    return 0;
}