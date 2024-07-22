// examples_21-08
#include <stdio.h>
#include <time.h>
#include <errno.h> //s
int main()
{
	time_t tictoc;
	struct tm today;
	errno_t err;	//s

	time(&tictoc);
	
	err = localtime_s(&today, &tictoc); //s
	if (err != 0) { //s
		printf("Failed to get the local time.\n"); //s
		return 1; //s
	}

	//today = localtime(&tictoc); // deleted

	printf("It's now ");
	if (today.tm_hour > 12)  // (->) changed to (.)
		printf("%d:", today.tm_hour - 12);
	else
		printf("%d:", today.tm_hour);
	printf("%02d:%02d ", today.tm_min, today.tm_sec);
	printf("%s\n", today.tm_hour > 11 ? "P.M." : "A.M.");
	return(0);

}