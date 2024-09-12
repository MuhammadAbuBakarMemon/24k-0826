#include <stdio.h>

int main()
{	
	float n1, n2, ans;
	char opcode;
	printf("Please enter the first operand: ");
	scanf("%f", &n1);
	printf("Please enter the second operand: ");
	scanf("%f", &n2);
	printf("Please enter the opcode/operator from either + - * /: ");
	scanf(" %c", &opcode);

	switch (opcode)
	{
		case '+' : 
			ans = n1 + n2;
			printf("The answer is: %f", ans);
			break;
		case '-' : 
			ans = n1 - n2;
			printf("The answer is: %f", ans);
			break;
		case '*' : 
			ans = n1 * n2;
			printf("The answer is: %f", ans);
			break;
		case '/' : 
			ans = n1 / n2;
			printf("The answer is: %f", ans);
			break;
		default : 
			printf("Invaid opcode/operator inputted....\n");
			break;
	}

	
	return 0;
}
