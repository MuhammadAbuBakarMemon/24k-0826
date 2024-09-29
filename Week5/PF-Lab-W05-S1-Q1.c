#include <stdio.h>

int main()
{   
    int age;
    printf("Please enter your age: \n");
    scanf("%d", &age);

    if (age >= 0 && age <=12)
    {
        printf("Child....\n");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teenager....\n");
    }
    else if (age >= 20 && age <= 64)
    {
        printf("Adult....\n");
    }
    else if (age >= 65)
    {
        printf("Senior....\n");
    }

    return 0;
}
