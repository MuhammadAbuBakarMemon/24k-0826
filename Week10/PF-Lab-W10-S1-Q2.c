#include <stdio.h>
#include <string.h>

char* r_str(char ar[], char r_ar[], int left, int size);

int main(void)
{

    int len = 0;

    printf("Please state the maximum number of characters you would like to store in your string: \n");
    scanf("%d", &len);

    while(getchar() != '\n');

    char ray[len + 1];

    printf("Please enter your string: \n");
    fgets(ray, len + 1, stdin);
    ray[strcspn(ray, "\n")] = '\0';
    char r_ray[len + 1];

    for (int m = 0; m < len + 1; m++)
    {
        r_ray[m] = ' ';
    }

    printf("The reversed string is: \n");

    r_str(ray, r_ray, 0, strlen(ray));

    fputs(r_ray, stdout);

    return 0;
}

//array notation

// char* r_str(char ar[], char r_ar[], int left, int size)
// {

//     if (ar[left] == '\0')
//     {
//         r_ar[size] = '\0';
//         return r_ar;
//     }

//     r_ar[size - left - 1] = ar[left];
//     left++;
//     r_str(ar, r_ar, left, size);
// }

//same thing with pointer notation

char* r_str(char *ar, char *r_ar, int left, int size)
{
    if (*ar == '\0')
    {
        *(r_ar+size-left-1) = '\0';
        return r_ar;
    }

    *(r_ar+size-left-1) = *ar;

    left++;
    ar++;
    r_str(ar, r_ar, left, size);
}