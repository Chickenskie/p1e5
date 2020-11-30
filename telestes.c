#include <stdio.h>

int main(void)
{
	int a = 4, b = 3, c = 1;
	a += b -= ++c * a--;
	printf("%d %d %d\n", a, b, c);
	return 0;
	/* 
	to a ginetai a = a - 1 kai pollaplasiaszetai me to c, 
	epeita b = b-7 = -5 kai to c = 2, 
	telos to a += b tha ginei a = a + b, dhladh a = 3 + (-5), ara a = -2
	*/
}

