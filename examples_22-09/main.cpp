// examples_22-09
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* handle;
	int highscore[5];
	errno_t err;
	int x;

	err = fopen_s(&handle, "scores.dat", "r");
	if (err != 0)
	{
		puts("File error!");
		exit(1);
	}
	fread(highscore, sizeof(int), 5, handle);
	fclose(handle);
	for (x = 0;x < 5;x++)
		printf("High score #%d: %d\n", x + 1, highscore[x]);
	return(0);
}