// examples_21-10
#include <stdio.h>
#include <time.h>
int main()
{
	time_t now, then;
	float delay = 0.0;

	time(&then);
	puts("Start");
	while (delay < 1)
	{
		time(&now);
		delay = difftime(now, then);
		printf("%f\r", delay);
	}
	puts("\nStop");
	return(0);
}