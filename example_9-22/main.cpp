// example_9-22
#include <stdio.h>
int main()
{
	int x;

	for (x = 0; x < 10; x = x + 1, printf("%d\n", x))
		;
	return(0);
}