// examples_21-01
#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;

	time(&tictoc);
	printf("The time is now %lu\n", tictoc);
	return(0);
}