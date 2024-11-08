#include <stdio.h>

void max_min_finder(int ray[], int size, int array[], int n);

int main(void)
{

    int len = 0;

    printf("Please enter the number of data elemenrts (integers) you would like to store in your array: \n");
    scanf("%d", &len);

    int ray[len];

    for (int m = 0; m < len; m++)
    {
        printf("Please enter the data element at Index Position %d: \n", m);
        scanf("%d", &ray[m]);
    }

    int max_min_ray[2] = {0};                                                                               //Array to hold max and min values 

    //max_min_finder(ray, sizeof(ray)/sizeof(max_min_ray[0]), max_min_ray, 2);                             //This approach is also valid, but less reliable for variable ength array's (VLA's)
    /*
    Why is this less reliable? 
    Because VLA's length/size is not determined at compille time but at run time, so at compile time when we passs the expression into the function call, this may result in error, as it is less reliable
    so at compile  time when our expression is evaluated the compiler only  knows the size of the int (datatype) stored in our array, and not the entire array (ray in this case in bytes)
    */

    max_min_finder(ray, len, min_max_ray, 2);

    printf("The Maximum value in the array is: %d\n", max_min_ray[0]);                                      //Assuming that the value at index position 0 is the Max Vlaue 
    printf("The Minimun value in the array is: %d\n", max_min_ray[1]);                                      //Assuming that the value at index position 0 is the Min Vlaue

    return 0;
}

void max_min_finder(int ray[], int size, int array[], int n)
{
    array[0] = ray[0];                                       //Assuming that the value at index position 0 is the Max Vlaue 
    array[1] = ray[0];                                       //Assuming that the value at index position 0 is the Min Vlaue 

    for (int x = 0; x < size; x++)
    {
        if (ray[x] > array[0])
        {
            array[0] = ray[x];
        }
        else if (ray[x] < array[1])
        {
            array[1] = ray[x];
        }
    }

}