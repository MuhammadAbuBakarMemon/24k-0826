#include <stdio.h>

int main()
{   
    int t1 = 1;
    int t2 = 2;
    int result;
    
    for (int m = 1; m <= 9; m++)
    {
        if (m == 1 || m == 2)
        {
            printf("%d, ", m);
            continue;
        }
        
        result = t1 * t2;
        printf("%d, ", result);
        t1 = t2;
        t2 = result;

    }

    return 0;

}