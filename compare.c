#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("Enter two integer numbers:\n");
	scanf("%d%d", &a, &b);

	if (a > b)
	{
		printf("The smallest number is: %d", b);
}
	if (b > a){
	
		printf("The smallest number is: %d", a);
}

}

