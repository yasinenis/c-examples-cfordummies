// examples_22-05
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fh;
	errno_t err;

	/* "a" == append */
	err = fopen_s(&fh, "hello.txt", "a");
	if (err != 0)
	{
		puts("Can't open that file!");
		exit(1);
	}
	fprintf(fh, "This text was added later\n");
	puts("Text appended");
	fclose(fh);
	return(0);
}