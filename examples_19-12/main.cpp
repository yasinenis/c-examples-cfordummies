// examples_19-12
#include <stdio.h>
int main()
{
	char sample[] = "From whence cometh my help?\n";
	char* ps;

	ps = sample;        /* initialize the pointer */

	while (*ps != '\0')
	{
		putchar(*ps);
		ps++;
	}
	return(0);
}