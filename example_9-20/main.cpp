// example_9-20
#include <stdio.h>
int main()
{
	int count;

	count = 0;
	for (;;)
	{
		printf("%d, ", count);
		count = count + 1;
		if (count > 50)
			break;
	}
	putchar('\n');
	return(0);
}