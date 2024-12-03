#include <stdio.h>

int recursivelinearsearch(int *ray, int size, int target, int c_i);

int main(void)
{

    int n = 0;

    printf("Please enter the number of elemenrts you would like to store in the array: \n");
    scanf("%d", &n);

    int ray[n];

    printf("Please start entering the data values in your array: \n");

    for (int m = 0; m < n; m++)
    {
        printf("Elemnt at index position - %d - \n", m);
        scanf("%d", (ray+m));
    }

    int aim = 0;

    printf("Enter the data ekement you would like to search for: \n");
    scanf("%d", &aim);

    int len = sizeof(ray)/sizeof(ray[0]);

    int store = recursivelinearsearch(ray, len, aim, 0);

    if (store == -1)
    {
        printf("No data element was found in the array: \n");
    }
    else
    {
        printf("The data element to find (%d) exists in the array at index position - %d\n", *(ray+store), store);
    }

    return 0;
}

int recursivelinearsearch(int *ray, int size, int target, int c_i)
{
    if ( (*(ray+c_i) == target))
    {
        return c_i;
    }

    if (c_i == size - 1)
    {
        return -1;
    }

    c_i++;
    recursivelinearsearch(ray, size, target, c_i);

}