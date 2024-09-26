#include <stdio.h>

int main()
{	
	int age;
	char citizenship;
	printf("Please enter your age: ");
	scanf("%d", &age);
	printf("Please enter your citizenship P for Pakistani and F for Forigen: ");
	scanf(" %c", &citizenship);

	if (age > 17 && citizenship == 'p' || citizenship == 'P')
	{
		printf("You are eligible to vote....\n");
	}
	else if (age > 17)
	{
		printf("If you're not Pakistani be happy, as you're a lucky person, and please only consider voting in your country....\n");
	}
	else if (citizenship == 'P' || citizenship == 'P')
	{
		printf("Please wait for a few years to meet the eligibility criteria");
	}
	else
	{
		printf("You don't meet either of the criterias...\n");
	}

	return 0;
}