#include <stdio.h>

int main()
{
	char sym;
	printf("Please enter the character to check: ");
	scanf(" %c", &sym);

	if (sym >= 65 && sym <= 90)
	{
		printf("The entered data is an uppercase character...\n");
	}
	else if (sym >=97 && sym <= 122)
	{
		printf("The entered data is a lowercase character...\n");
	}
	else if (sym >= 48 && sym <= 57)
	{
		printf("The entered data is a digit...\n");

	}
	else if (sym >= 32 && sym <= 147 || sym >= 58 && sym <= 64 || sym >= 91 && sym <= 96 || sym >= 123 && sym <= 126)
	{
		printf("The entered data is a special character...\n");
	}
	else 
	{
		printf("Character mismatch");
	}
	return 0;
}