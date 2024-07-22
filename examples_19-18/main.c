// examples_19-18
#include <stdio.h>
int main()
{
	char* fruit[] = {
		"watermelon",
		"banana",
		"pear",
		"apple",
		"coconut",
		"grape",
		"blueberry"
	};
	int x;

	for (x = 0;x < 7;x++)
	{
		putchar(**(fruit + x));
		putchar('\n');
	}
}