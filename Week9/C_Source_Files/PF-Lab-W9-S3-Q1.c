#include <stdio.h>
#include <string.h>

int main(void)
{   
    char ray[][30] = {{"buy now"}, {"abu bakar"}, {"goodluck"} };
    int s = 0;

    printf("Please enter the maximun size/lenght of your non-multi word character, that you would like to search: ");
    scanf("%d", &s);

    //Size was incremented by 1 to allow for the adition of the '\0' character, the null character or the null terminator
    char data[s + 1];

    printf("Please enter the non-multi syllable word that you would like to search for in the array: ");
    scanf("%s", data);

    int found = 0;
    for (int m = 0; m < sizeof(ray)/sizeof(ray[0]); m++)        //used sizeof method to find the size of our statically allocated array (an array whose size is determined at compile time,
    {                                                           //and the memory is allocated on the stack), lifetime of array is declared with in the scope with in which the array is declared in

        if (strstr(ray[m], data) != NULL)       //strstr (the substring Function basicaly returns a NULL value in C when the particular data/substring is not found in the string), we can only compare for null as if 
        {                                       //the string we are searching for is found with in our memory, the strstr function returns a pointer pointing to the first index of the first occurance of the substring
            found = 1;                          //in the string
            break;
        }
    }

    if (found)                                  //basicallly evaluate to found == 1, because if condition runs the if block when the condition is True, and by default any value other than 0 in C is called False
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}