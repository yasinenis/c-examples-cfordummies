// examples_14-03
#include <stdio.h>
int main()
{
	struct president
	{
		char name[40];
		int year;
	};
	struct president first = {
		"George Washington",
		1789
	};

	printf("The first president was %s\n", first.name);
	printf("He was inaugurated in %d\n", first.year);

	return(0);
}