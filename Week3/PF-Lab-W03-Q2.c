#include <stdio.h>

int main(void)
{
	int num1, num2, temp;
	printf("Please enter the first number: \n");
	scanf("%d", &num1);
	printf("Please enter the second number: \n");
	scanf("%d", &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("The first number after swapping is: %d\n", num1);
	printf("The second number after swapping is: %d", num2);
}