// examples_19-17
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
		"bluebery",
	};
	int x;

	for (x = 0;x < 7;x++)
		puts(*(fruit + x));

	return(0);
}