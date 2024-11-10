#include <stdio.h>
#include <string.h>

int main(void)
{

    int words = 0;
    int len = 0;

    printf("Please enter maximum number of words you would like to input in your array of strings: \n");
    scanf("%d", &words);

    printf("Please enter maximum length of each word you would like to input in your array of strings: \n");
    scanf("%d", &len);

    char ray[words][len + 1];

    while(getchar() != '\n');

    printf("Please enter the words in to your string\n");

    for (int m = 0; m < words; m++)
    {
        printf("Enter word number %d: \n", m + 1);
        fgets(ray[m], len + 1, stdin);
        ray[m][strcspn(ray[m], "\n")] = '\0';
    }

    int is_palindrome = 1;                  //Assuming that my word entered is a palindrome

    for (int m = 0; m < words; m++)
    {
        int size = strlen(ray[m]);
        is_palindrome = 1;                  //Assuming that my word entered is a palindrome
        
        for (int n = 0; n < size / 2; n++)
        {
            if (ray[m][n] != ray[m][size - 1 - n])
            is_palindrome = 0;
        }

        if (is_palindrome)
        {
            printf("The following word number %d, at index position %d (in the array of strings) is a palindrome....\n", m + 1, m);
        }
        else
        {
            printf("The following word number %d, at index position %d (in the array of strings) is not a palindrome....\n", m + 1, m);
        }
        
    }

    return 0;
        
}