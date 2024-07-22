// examples_22-04
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fh;
	char buffer[64];
	errno_t err;
	
	err = fopen_s(&fh, "hello.txt", "r");
	if (err != 0)
	{
		puts("Can't open that file!");
		exit(1);
	}
	while (fgets(buffer, 64, fh))
		printf("%s", buffer);
	fclose(fh);
	return(0);
}