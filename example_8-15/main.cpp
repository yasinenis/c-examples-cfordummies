// example_8-15
#include <stdio.h>
int main()
{
	int coordinate;

	printf("Input target coordinate: ");
	scanf_s("%d", &coordinate);
	if (coordinate < -5 || coordinate > 5)
	{
		puts("Close enough!");
	}
	else
	{
		puts("Target is out of range!");
	}
	return(0);
}