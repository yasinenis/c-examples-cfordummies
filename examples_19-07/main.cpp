// examples_19-07
#include <stdio.h>
int main()
{
	char alphabet[26];
	int x;
	char* pa;

	pa = alphabet;            /* initialize pointer */

	/* fill the array */
	for (x = 0;x < 26;x++)
	{
		*pa = x + 'A';
		pa++;
	}
	pa = alphabet;            /* reinitialize pointer */

	/* output the array */
	for (x = 0;x < 26;x++)
	{
		putchar(*pa);
		pa++;
	}
	putchar('\n');

	return(0);
}