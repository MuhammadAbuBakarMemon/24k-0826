#include <stdio.h>

int main()
{   
    int age;
    float creditscore; 
    char income;
    
    printf("Please enter your age: \n");
    scanf("%d", &age);
    printf("Please enter your income s for stable and u for unstable: \n");
    scanf(" %c", &income);
    printf("Please enter your credit score out of 850: \n");
    scanf("%f", &creditscore);

    if (age >= 18 && income == 's' || income == 'S'  && creditscore >= 650)
    {
        printf("You are eligible for a loan....");
    }
    else 
    {
        printf("You are not eligible for a loan....");
    }

    return 0;

}