#include <stdio.h>

int main()
{
    int size;

    printf("Please notify us regarding the number of values you would like to store in the array: ");
    scanf("%d", &size);

    int container[size];

    printf("Pleae enter the values you would like to feed to the array: \n");

    for (int m = 0; m < size; m++)
    {
        scanf("%d", &container[m]);
    }

    int max_val = -99999999;
    int min_val = 99999999;

    for (int m = 0; m < size; m++)
    {
        if (container[m] > max_val)
        {
            max_val = container[m];
        }

        if (container[m] < min_val)
        {
            min_val = container[m];
        }
    }

    printf("Maximum Number = %d\n", max_val);
    printf("Minimum Number = %d\n", min_val);

    return 0;
}

