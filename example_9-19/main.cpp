// example_9-19
#include <stdio.h>
int main()
{
	int count;

	count = 0;
	while (1)
	{
		printf("%d, ", count);
		count = count + 1;
		if (count > 50)
			break;
	}
	putchar('\n');
	return(0);
}