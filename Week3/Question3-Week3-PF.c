#include <stdio.h>

 int main()
{
	int sal, tr, taxtopay, f_sal;
	printf("Please enter the salary: \n");
	scanf("%d", &sal);
	printf("Please enter the tax rate: \n");
	scanf("%d", &tr);
	
	taxtopay = (sal * tr) / 100;
	f_sal = sal - taxtopay;

	printf("The tax to be paid is: %d, and the salary you will have afterwards is: ", taxtopay, f_sal); 
	return 0;
}
