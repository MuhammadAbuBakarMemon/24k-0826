#include <stdio.h>
#include <string.h>

char * rev_str(char ar[], int right, int left);

int main(void)
{

    int len = 0;

    printf("Please enter the maximum number of characters that you would like in your string: \n");
    scanf("%d", &len);

    while (getchar() != '\n');

    char ray[len + 1];

    printf("Please start entering your string: \n");
    fgets(ray, sizeof(ray), stdin);
    ray[strcspn(ray, "\n")] = '\0';


    printf("The string before reversal is: \n");
    fputs(ray, stdout);
    

    printf("\nThe string after reversal is: \n");
    fputs(rev_str(ray, 0, strlen(ray) - 1), stdout);

    return 0;
}

static int m = 0;

char * rev_str(char ar[], int right, int left)
{

    if (right >= left)
    {
        return ar;
    }
    else
    {
        char temp = ar[right];
        ar[right] = ar[left];
        ar[left] = temp;

        rev_str(ar, right + 1, left - 1);
    }

}