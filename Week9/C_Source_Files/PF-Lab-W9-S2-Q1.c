#include <stdio.h>
#include <string.h>

int main(void)
{   
    int s_size = 0;
    int d_size = 0;

    printf("please enter the maximum initial size of your source string/character array: ");
    scanf("%d", &s_size);

    printf("please enter the maximum initial size of your destination string/character array: ");
    scanf("%d", &d_size);

    while (getchar() != '\n');

    char s_ray[s_size + 1];
    char d_ray[d_size + s_size + 1];

    printf("Please enter your source string: ");
    fgets(s_ray, s_size + 1, stdin);

    s_ray[strcspn(s_ray, "\n")] = '\0';

    // Both the above line 23 code and the commented out code block perform the same task I just wrote them for my own practice, please feel free to ignore the commented out part

    // size_t s_len = strlen(s_ray);
    // if (s_len > 0 && s_ray[s_len - 1] == '\n')
    // {
    //     s_ray[s_len - 1] = '\0';
    // }

    printf("Please enter your destination string: ");
    fgets(d_ray, d_size +  1, stdin);

    d_ray[strcspn(d_ray, "\n")] = '\0';     

    //The line no# 36 code part is a bit excessive as it will only work (work by not including the new line character in the concatenated string) because fgets() function will always add a new line character '\n'
    //to the end of the string the function is taking as input, given the array/string has sufficient space for its inclusion, now if when takimg the number of characrters to be concatenanted as input in the 
    //string after concatenation, we set the number of scanning characters in a way that they take one more chatacter than the maximun characters that were entered (basically the new line character as well) 
    //then when outputting on the terminal window we will, surely an extra line in the terminal window, so it is better to clear out the new line character if it is present in the source array that is to be concatenated 

    // size_t d_len = strlen(d_ray);
    // if (d_len > 0 && d_ray[d_len - 1] == '\n')
    // {
    //     d_ray[d_len - 1] = '\0';
    // }

    int c_ch = 0;

    printf("please enter the number of characters you would like to concatenate from the starting index of your source string/character array to your destination string: ");
    scanf("%d", &c_ch);

    strncat(s_ray, d_ray, c_ch);

    puts(s_ray);

    return 0;
}
