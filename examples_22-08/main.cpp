// examples_22-08
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* handle;
	int highscore[5];
	errno_t err;
	int x;

	err = fopen_s(&handle, "scores.dat", "w");
	if (err != 0)
	{
		puts("File error!");
		exit(1);
	}
	for (x = 0;x < 5;x++)
	{
		printf("High score #%d? ", x + 1);
		scanf_s("%d", &highscore[x]);
	}
	fwrite(highscore, sizeof(int), 5, handle);
	fclose(handle);
	puts("Scores saved");
	return(0);
}
