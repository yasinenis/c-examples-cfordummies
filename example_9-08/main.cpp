// example_9-08
#include <stdio.h>
int main()
{
	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z';alphabet = alphabet + 1)
	{
		printf("%c", alphabet);
	}
	putchar('\n');
	return(0);
}