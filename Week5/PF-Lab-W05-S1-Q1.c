#include <stdio.h>

int main()
{   
    int num;
    printf("Please enter your age: \n");
    scanf("%d", &num);

    if (age >= 0 && age <=12)
    {
        printf("Child....\n");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teenager....\n");
    }
    else if (age >= 20 && age <= 61)
    {
        printf("Adult....\n");
    }
    else 
    {
        primtf("Senior....\n");
    }
}
