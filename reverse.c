#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Please enter two negative integers:\n");
	scanf("%d%d", &a, &b);
	if (a>0 || b>0)	
	{
		printf("Error!");
	}
	else 
	{
		printf("The opposites are: %d, %d", -a, -b);
	}
	
	
	return 0;
}
