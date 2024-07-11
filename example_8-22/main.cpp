// example_8-22
#include <stdio.h>
int main()
{
	int a, b, larger;

	printf("Enter a value A: ");
	scanf_s("%d", &a);
	printf("Enter different value B: ");
	scanf_s("%d", &b);

	if (a > b)
		larger = a;
	else
		larger = b;
	printf("Value %d is larger.\n", larger);
	return(0);


}