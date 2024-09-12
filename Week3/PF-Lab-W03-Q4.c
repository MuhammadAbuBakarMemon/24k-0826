#include <stdio.h>

int main()
{
	const int dist = 1207;
	int f_avg, f_used, fuel_cost, f_cost, r_cost, f_fp = 118, r_fp = 123;

	printf("Please enter the fuel average of your car: \n");
	scanf("%d", &f_avg);
	
	if (f_avg > 0)
	{
		f_used = dist / f_avg;
	
		f_cost = f_fp * (dist / f_avg);
		r_cost = r_fp * (dist / f_avg);
		fuel_cost = f_cost + r_cost;
	
		printf("The fuel used for the journey is: %d \n", f_used * 2);
		printf("The total cost for the journey is: %d \n", fuel_cost);
	}
	else
	{
		printf("Invalid value for the fuel average was passed....\n");
	}

	return 0;
}
