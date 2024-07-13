// examples_11-03
#include <stdio.h>

int main()
{
	int c;

	for (c = -5;c < 5;c++)
		printf("%d ", c);
	for (;c >= -5;c--);
	putchar('\n');
	return(0);
}