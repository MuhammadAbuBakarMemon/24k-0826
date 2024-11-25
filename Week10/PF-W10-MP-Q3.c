#include <stdio.h>

int temp_exceeded_limit(float temp, float m_t);

int static counter = 0;

int main(void)
{
    const float maxtemp = 90.0;
    printf("The maximum allowable temperature in celcius is: %f\n", maxtemp);

    int loop_iterater = 0;

    printf("Determine the number of inputs you would like to check for: \n");
    scanf("%d", &loop_iterater);

    float checker = 0.0;

    int val = 0;

    for (int m = 0; m < loop_iterater; m++)
    {
        printf("Enter the number you would like to check the maximum temperature limit against: \n");
        scanf("%f", &checker);

        temp_exceeded_limit(checker, maxtemp);
    }

    printf("The number of times the maximum allowable limit has exceeded is: %d\n", counter);

    return 0;
}

int temp_exceeded_limit(float temp, float m_t)
{

    if (temp > m_t)
    {
        counter++;
    }

    return counter;
}