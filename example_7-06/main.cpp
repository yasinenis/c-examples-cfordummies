// example_7-06
#include <stdio.h>

int main()
{
	int ch;

	printf("Press Enter: ");
	getchar();
	ch = 'H';
	putchar(ch);
	ch = 'i';
	putchar(ch);
	putchar('!');
	putchar('\n');
	return(0);
}