// examples_13-17
#include <stdio.h>
int main()
{
	int first, second;

	printf("Type your first initial: ");
	first = getchar();
	printf("Type your second initial: ");
	second = getchar();
	printf("Your initials are '%c' and '%c'\n", first, second);
	return(0);
}