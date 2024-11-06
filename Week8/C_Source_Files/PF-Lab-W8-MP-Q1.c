// PF-Lab-W8-Q1.c

#include <stdio.h>
#include <math.h>

int main()
{
    int r_max = 0;
    int r_min = 0;
    
    int a_index = 0;
    int min_one_p_num_flag = 0;

    printf("Please enter the value where you would like your range to start from: ");
    scanf("%d", &r_min);

    printf("Please enter the value where you would like your range to end at: ");
    scanf("%d", &r_max);

    int p_num[r_max - r_min];

    for (int m = r_min; m <= r_max; m++)
    {   
        int f_count = 0;

        for (int n = 2; n <= sqrt(m); n++)
        {
            if (m % n == 0)
            {
                f_count = 1;
                break;
            }
        }

        if (f_count != 1)
        {   
            p_num[a_index] = m;
            a_index++;
            min_one_p_num_flag = 1;
        }
    }

    if (min_one_p_num_flag == 0)
    {
        printf("There were no prime numbers in the range specified by you....");
        return 0;
    }

    printf("The prime numbers in your specified range are: \n");

    for (int x = 0; x < a_index; x++)
    {
        printf("%d ", p_num[x]);
    }

    return 0;
}