#include <stdio.h>

int main()
{	
	int num;
	printf("Please enter your number: \n");
	scanf("%d", &num);
	
	//Checking if the num is not zero as zero % any number is always zero
	
	if (num % 3 == 0 && num % 5 == 0 && num != 0)
	{	
		printf("The entered number is divisible by both 5 and 3....\n");
	}

	return 0;
}
