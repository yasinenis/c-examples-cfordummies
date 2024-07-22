// examples_21-04
#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	char buffer[26];
	errno_t err;

	tictoc = 946684800;

	err = ctime_s(buffer, sizeof(buffer), &tictoc);
	if (err != 0) {
		printf("Error converting time\n");
		return 1;
	}

	printf("The time is now %s", buffer);
	return(0);
}