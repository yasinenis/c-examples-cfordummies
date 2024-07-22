// examples_22-01
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
	FILE* fh;
	errno_t err;

	/* open the file */
	err = fopen_s(&fh, "Hello.txt", "w");
	/* check for errors */
	if ( err!= 0)
	{
		puts("Can't open that file!");
		exit(1);
	}

	/* output text */
	fprintf(fh, "Look what I made!\n");
	/* close the file */
	fclose(fh);
	/* inform the user */
	puts("File written.");
	return(0);
}