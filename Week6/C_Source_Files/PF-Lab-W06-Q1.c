#include <stdio.h>

/*
Since we are required to terminate our loop once the user enters a zero, this means the iterations are unknown and our loop in the main program would terminate on a partuicular condiution 
(i.e once the user has entered a zero) 
So we can use either of the condtion controlled loops for our function
*/

//Implemented Via While Loop
/*
If we use a While Loop since this is a pre-conditional loop this checks our condition before executing the blocks of code
as a result the only small extra work we are required to do here is that we need to take an output once outside the loop so a value is assigned to a our variable 
and we can check make a comparison for our respective condition against that value
Later on inside the loop we are also required to retake the input and update the variable so the loop continues to take input until until a zero is entered and the vale of our variable is constantly updated on each iteration
*/

int main()
{
    int num;
    
    printf("Please enter a non-zero value: \n");
    scanf("%d", &num);

    while (num != 0)
    {
        int sample = 6;

        printf("The result would mount to: %d\n", sample += num);
        printf("Please enter a non-zero value: \n");
        scanf("%d", &num);
    }

    printf("The loop got terminated because you entered a zero....\n");

    return 0;
}

//Imlemented Via Do While Loop
/*
Since Do While is a post-conditional Loop it always excutes the block of code inside the scope of our loop construct atleast once 
The only extra work we are required to do here is that we check that is the user entered value is not a zero and only then we would sum the value with our variable and print out it's result
We do this and this is termed as extra work because in the while loop our condition is checked before the executon of the block of code so in while loop he summation and printing on only non-zero values is done
*/

int main()
{
    do 
    {
        int num, sample = 8;

        printf("Please enter a non- zero value: \n");
        scanf("%d", &num);

        // The process of adddition and printing on the new value after summation would only take place if the number entered is not erquals to zero

        if (num != 0)
        {
            sample += num;
            printf("The result would mount to: %d\n", sample);
        }

    }
    while (num != 0)

    printf("The loop got terminated because you entered a zero....\n");

    return 0;

}