#include <stdio.h>

int main()
{
	int SI, P, R, T;
	printf("Please enter principal amount between PKR 100/- and PKR 1,000,000/-: \n");
	sacnf("%d", &P);
	
	printf("Please enter rate of interest between 05% and 10%: \n");
	sacnf("%d", &R);

	printf("Please enter time period between 1 year and 10 years: \n");
	sacnf("%d", &T);

	/* This was explicitly not instructed to be done in the question
	   I placed these conditions to ensure that no input lies outside of the specified range
	   Because some mischevious personalities try and test how the program is executed when values outside the specified ranges are entered even though the prompt clearly states the ranges of values acceptable
	   If any such value is entered then due to the IF conditional statement the program won't run and return zero 
	*/

	if (P >= 100 && P <= 1000000 && R >= 5 && R <= 10 && T > 0 && T < 11)
	{
		SI = (P * R * T) / 100;
		printf("The Intrest amount is: %d", SI);
	}
	
	
	return 0;
]