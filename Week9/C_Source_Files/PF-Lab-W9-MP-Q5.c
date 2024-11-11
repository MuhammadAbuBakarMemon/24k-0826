#include <stdio.h>
#include <string.h>

char* r_str(char ray[], int n, char r_str[]);

int main(void)
{

    int len = 0;
    int size = 0;

    printf("Please enter the maximum number of characters you would like to input in the word that you would like to reverse afterwards: \n");
    scanf("%d", &len);

    while(getchar() != '\n');

    char ar[len + 1];

    printf("Please enter your string that you would like to reverse: \n");
    fgets(ar, len + 1, stdin);
    ar[strcspn(ar, "\n")] = '\0';

    size = strlen(ar);

    char r_ray[size + 1];

    printf("The reversed string is: \n");
    fputs(r_str(ar, size, r_ray), stdout);

    return 0;
}

char* r_str(char ray[], int n, char r_str[])
{
    
    for (int m = 0; m < n; m++)
    {
        r_str[n- 1 - m] = ray[m];
    }

    r_str[n] = '\0';

    return r_str;
}