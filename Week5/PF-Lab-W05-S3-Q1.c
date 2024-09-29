#include <stdio.h>

int main()
{   
float n1,n2;
printf("Please enter your 1st number: \n");
scanf("%f", &n1);
printf("Please enter your 2nd number: \n");
scanf("%f", &n2);

n1 > n2 ? printf("The greater number is the 1st one....\n") : n1 != n2 ? printf("Thew greater number is the 2nd one.....\n") : (void)0;

return 0;
}