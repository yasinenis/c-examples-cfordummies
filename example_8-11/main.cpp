// example_8-11
#include <stdio.h>
int main()
{
	int a, b;

	a = 6;
	printf("Type a value: ");
	scanf_s("%d", &b,sizeof(b));
	if (a > b)
	{
		printf("%d is greater than %d\n", a, b);
	}
	else
	{
		printf("%d is not greater than %d\n", a, b);
	}
	return(0);
}