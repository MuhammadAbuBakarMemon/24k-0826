/*
This program takes the value of income and stores it in a variable of character (char) datatype
for if the question expected me to take the income as a float datatype an alternate program has been commented down below for reference
*/

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

/*This is the commented out version of the same code as above 
it only takes input of the income in a variable of float datatype and the condition checks that if the income is stable in today's market by 
assuming that a hardcoded value (PKR 150,000) in the program is what the threshold is set for a stable income, 

this can also be done by taking the value of stable income from the user, storing it in a variable, 
and then making the comparsion against that variable to compare and evaluate if the user's income is stable or not

#include <stdio.h>

int main()
{   
    int age;
    float creditscore, income;
    
    printf("Please enter your age: \n");
    scanf("%d", &age);
    printf("Please enter your income in PKR (assuming that in today's market 150000.0 is what is considered as a stable income): \n");
    scanf("%f", &income);
    printf("Please enter your credit score out of 850: \n");
    scanf("%f", &creditscore);

    if (age >= 18 && income >= 150000  && creditscore >= 650)
    {
        printf("You are eligible for a loan....");
    }
    else 
    {
        printf("You are not eligible for a loan....");
    }

    return 0;

}
*/ 