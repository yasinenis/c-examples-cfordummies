// example_9-06
#include <stdio.h>
int main()
{
	int tre;

	for (tre = 3;tre <= 100;tre = tre + 3)
	{
		printf("%d\t", tre);
	}
	putchar('n');
	return(0);
}