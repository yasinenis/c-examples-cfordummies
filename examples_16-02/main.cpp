// examples_16-02
#include <stdio.h>
int main()
{
	int a, b;
	float c;

	printf("Input the first value: ");
	scanf_s("%d", &a);
	printf("Input the second value: ");
	scanf_s("%d", &b);
	c = (float)a / (float)b;
	printf("%d/%d = %.2f\n", a, b, c);
	return(0);
}