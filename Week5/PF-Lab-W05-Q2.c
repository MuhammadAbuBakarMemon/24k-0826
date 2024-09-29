#include <stdio.h>

int main()
{   
    int attendance;
    float score, result, aggregate;
    printf("Please enter your attendance in precentage: ");
    scanf("%d", &attendance);

    if (attendance >= 80)
    {   
        printf("Please enter your assignment score's average: ");
        scanf("%f", &score);
        printf("Please enter your exam results: ");
        scanf("%f", &result);
        
        aggregate = (result * 0.7) + (score * 0.3);
        if (aggregate>= 90)
        {
            printf("Your garde is A*....");
        }
        else if (aggregate >= 80)
        {
            printf("Your grade is A...");
        }
        else if (aggregate >= 70)
        {
            printf("Your grade is B...");
        }
        else if (aggregate >= 60)
        {
            printf("Your grade is C...");
        }
        else if (aggregate >= 50)
        {
            printf("Your grade is D...");
        }
        else
        {
             printf("Unfortunately, due to insufficient aggregate you failed and will have to repeat this particular course....");
        }
    }
    else 
    {
        printf("Unfortunately, due to poor attendance you will not be allowed to sit in the exam and will have to repeat this particular course....");
    }

    return 0;

}