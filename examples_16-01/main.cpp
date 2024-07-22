// examples_16-01
#include <stdio.h>
int main()
{
	int a, b;
	float c;

	printf("Input the first value: ");
	scanf_s("%d", &a);
	printf("Input the second value: ");
	scanf_s("%d", &b);
	c = a / b;
	printf("%d/%d = %.2f\n", a, b, c);
	return(0);
}