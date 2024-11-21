#include <stdio.h>

// void ray_printer(int *ar, int s, int m);

void ray_printer(int *ar, int size);

int main(void)
{
    
    int len = 0;

    printf("Kindly specify the size of your array: \n");
    scanf("%d", &len);

    int ray[len];

    printf("Please start entering darta elements into your array: \n");
    int *ptr = ray;

    for (int m = 0; m < len; m++)
    {
        printf("Enter data element at Index Position %d - ", m);
        scanf("%d", ptr++);
    }

    //Extra COde

    //ptr = ray;

    // for (int m = 0; m < len; m++)
    // {
    //     printf("%d\n", *ptr);                   //array names are constant pointers (in C language) so ray++ gives error
    //     ptr++;
    // }

    int count = 0;

    printf("You will  see the values of the array printed below due to the recursive function: \n");
    // ray_printer(ray, len, count);
    ray_printer(ray, len);

    return 0;
}

//one variant
// void ray_printer(int *ar, int s, int m)
// {

//     if (m == s)
//     {
//         return;
//     }

//     printf("%d", *(ar+m));
//     m++;
//     printf("\n");
//     ray_printer(ar, s, m);
// }

//another variant

void ray_printer(int *ar, int size)
{
    if (size <= 0)
    {
        return;
    }

    printf("%d\n", *(ar));
    ray_printer(ar + 1, size - 1);
}