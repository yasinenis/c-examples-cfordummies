//example_9-09
#include <stdio.h>
int main()
{
	char alphabet;

	for (alphabet = 'A';alphabet <= 'Z';alphabet = alphabet + 1)
	{
		printf("%d", alphabet);
	}
	putchar('\n');
	return(0);
}