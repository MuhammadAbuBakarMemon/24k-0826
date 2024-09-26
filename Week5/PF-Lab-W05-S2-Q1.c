#include <stdio.h>

int main()
{	
	int num;
	printf("Please enter your number: ");
	scanf("%d", &num);
		
	if (num % 3 == 0 && num % 5 == 0)
	{	
		printf("The entered number is divisible by both 5 and 3....");
	}

	return 0;
}
