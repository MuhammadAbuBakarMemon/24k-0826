#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *ray, int s, int e);

int main(void)
{

    // printf("Pleae enter the maximum number of characters that you w")

    char test[100] = "racecar"; 
    int st = 0;
    int en = strlen(test) - 1;

    if (isPalindrome(test, st, en))
    {
        printf("The string that you entered is a palindrome.");
    }
    else
    {
        printf("The string that you entered is not a palindrome.");
    }

    return 0;
}

int isPalindrome(char *ray, int s, int e)
{
    if (s >= e)
    {
        return 1;
    }

    if (ray[s] == ray[e])
    {
        isPalindrome(ray, s + 1, e - 1);
    }
    else
    {
        return 0;
    }
}
