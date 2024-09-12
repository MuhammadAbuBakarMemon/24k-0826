#include <stdio.h>

int main()
{
	float cost, total, saved, disc = 0;
	printf("Please enter your total: ");
	scanf("%f", &cost);n
	
	if (cost >= 500 && cost <= 2000)
	{
		disc = 0.05;
	}
	else if (cost >= 2000 && cost <= 4000)
	{
		disc = 0.1;
	}
	else if (cost >= 4000 && cost <= 6000)
	{
		disc = 0.2;
	}
	else if (cost > 6000)
	{
		disc = 0.35;
	}
	
	saved = disc * cost;
	total = cost - saved;
	
	printf("Your total was: %f\n", cost);
	printf("You saved: %f\n", saved);
	printf("The new total is: %f\n", total);
	return 0;
}
s