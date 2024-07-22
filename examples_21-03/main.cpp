// examples_21-03
#include <stdio.h>
#include <time.h>
int main()
{
	time_t tictoc;
	char buffer[26];
	errno_t err;

	// þu anki zamaný al
	time(&tictoc);

	// zamaný okunabilir bir dizeye dönüþtür
	err = ctime_s(buffer, sizeof(buffer), &tictoc);
	if (err != 0) {
		printf("Error converting time\n");
		return 1;
	}

	// zamaný yazdýr
	printf("The time is now %s", buffer);

	return(0);
}