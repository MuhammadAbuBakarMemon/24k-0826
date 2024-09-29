#include <stdio.h>

int main()
{   
    char character;

    printf("please enter a character you would like to encrypt: \n");
    scanf("%d", &character);

    printf("The encrypted version of this character is: %d\n", ~character);
     printf("The decrypted version of this character is: %d\n", ~(~character));

    return 0;
}