#include <stdio.h>

int main()
{

    int giventerms = 8;

    int term1 = 0;
    int term2 = 1;

    for (int m = 1; m <= giventerms; m++)
    {
        
        if (m == 1 ||  m == 2)
        {
            continue;
        }
        
        int result = term1 + term2;
        term1 = term2;
        term2 = result;
        printf("%d, ", result);
        
    }

    return 0;

}