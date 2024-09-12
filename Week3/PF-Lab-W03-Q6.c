#include <stdio.h>

int main(void)
{	
	int x1 = 5, x2 = 3, y1 = 4, y2 =2;
	float gradient;	

	gradient = (y2 - y1) / (x2 - x1);
	printf("The Slope is: %.3f", gradient);
	
	return 0;
}