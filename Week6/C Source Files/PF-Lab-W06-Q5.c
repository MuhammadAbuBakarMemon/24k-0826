#include <stdio.h>

int main ()
{
    int terms = 9;
    int int1 = 0;
    int int2 = 1;
    int int3 = 13;
    int starting_val = 65536;

    for (int m = 1; m <= terms; m++)
    {
        if (m == 1)
        {
            printf("%d, ", starting_val);
            continue;
        }

        printf("%d, ", (starting_val /= m));
        
    }

    return 0;
}