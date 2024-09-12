#include <stdio.h>

int main()
{
	int c_id;
	float units_c, cost, surchargeamt, netpayableamt;
	char name[30];

	printf("Enter your customer ID: ");
	scanf("%d", &c_id);
	printf("Enter your name: ");
	scanf("%29s", &name);
	printf("Enter your units consumed: ");
	scanf("%f", &units_c);

	printf("Customer ID: %d\n", c_id);
	printf("Customer Name: %s\n", name);
	printf("Units Consumed: %f\n", units_c);

	if (units_c >= 0 && units_c <= 199)
	{
		cost = units_c * 16.20;
		printf("Amount Charged @Rs. %f per unit: %f\n", units_c, cost);
	}
	else if (units_c >= 200 && units_c < 300)
	{
		cost = units_c * 20.10;
		printf("Amount Charged @Rs. %f per unit: %f\n", units_c, cost);
	}
	else if (units_c >= 300 && units_c < 500)
	{
		cost = units_c * 27.10;
		printf("Amount Charged @Rs. %f per unit: %f\n", units_c, cost);
	}
	else 
	{
		cost = units_c * 35.90;
		printf("Amount Charged @Rs. %f per unit: %f\n", units_c, cost);
	}

	if (cost >= 18000)
	{
		surchargeamt = cost * 0.15;
		netpayableamt = surchargeamt + (cost * 0.15);

		printf("Surcharge Amount: %f\n", surchargeamt);
		printf("Net Amount Paid bt the Customer: %f\n", netpayableamt);
	}
	
	return 0;
}