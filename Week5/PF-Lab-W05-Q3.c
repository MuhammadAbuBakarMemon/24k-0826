// Using the BITWISE NOT operastor

#include <stdio.h>

int main()
{   
    char character;

    printf("please enter a character you would like to encrypt: \n");
    scanf(" %c", &character);

    printf("The encrypted version of this character is: %c\n", ~character);
    printf("The decrypted version of this character is: %c\n", ~(~character));

    return 0;
}

// Using the BITWISRE XOR operator

// #include <stdio.h>

// int main()
// {   
//     char character, key;

//     printf("please enter a character you would like to encrypt: \n");
//     scanf(" %c", &character);
//     printf("please enter a character you would like to use as it's key: \n");
//     scanf(" %c", &key);

//     printf("The encrypted version of this character is: %c\n", character^key);
//     printf("The decrypted version of this character is: %c\n", (character^key)^key);

//     return 0;
// }