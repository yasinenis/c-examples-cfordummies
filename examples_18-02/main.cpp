// examples_18-02
#include <stdio.h>
int main()
{
	char string[] = "Does this string make me look fat?";

	printf("The string \"%s\" has a size of %lu.\n", string, sizeof(string));
	return(0);
}