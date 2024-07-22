// examples-22-06
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* handle;
	int highscore;
	errno_t err;

	err = fopen_s(&handle, "scores.dat", "w");
	if (err != 0)
	{
		puts("File error!");
		exit(1);
	}
	printf("What is your high score? ");
	scanf_s("%d", &highscore);
	fprintf(handle, "%d", highscore);
	fclose(handle);
	puts("Score saved");
	return(0);
}