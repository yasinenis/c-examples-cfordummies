// examples_11-06
#include <stdio.h>

int main()
{
	int a, b;

	b = 16;
	printf("Before, a is unassigned and b=%d\n", b);
	a = ++b;
	printf("After, a=%d and b=%d\n", a, b);
	return(0);
}