#include <stdio.h>

int calculator(int m, char op, int n);

int main(void)
{
    int n1 = 0;
    int n2 = 0;

    char operator = ' ';

    printf("Please enter your Operand 1: \n");
    scanf("%d", &n1);

    printf("Please enter your Opcode: \n");
    scanf(" %c", &operator);

    printf("Please enter your Operand 2: \n");
    scanf("%d", &n2);

    printf("The result of your calculation is: %d", calculator(n1, operator, n2));


    return 0;
}

int calculator(int m, char op, int n)
{
    int ans = 0;

    switch (op)
    {
        case '+':
            ans = m + n;
            break;
        case '-':
            ans = m - n;
            break;
        case '*':
            ans = m * n;
            break;
        case '/':
            ans = m / n;
            break;
    }

    return ans;
}