#include <stdio.h>

float m_t_km(float m);

int  main(void)
{

    float n1 = 0;
    int n2 = 0;

    printf("Enter the number of conversions that you would like to perform: \n");
    scanf("%d", &n2);

    

    for (int m = 0; m < n2; m++)
    {
        printf("Please enter the number that you would like to convert from meters to kilometers: \n");
        scanf("%f", &n1);

        printf("The value in kilo-meters will be: %.2f\n", m_t_km(n1));

    }

    return 0;
}

float m_t_km(float m)
{

    static int counter = 0;

    float km = (float) m / 1000.0;
    counter++;

    printf("The function has been called %d times. \n", counter);

    return km;
}