// examples_25-03
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
	int e;

	e = rename("blorfus", "fragus");
	if (e != 0)
	{
		printf("Error! ");
		switch (errno)
		{
		case EPERM:
			puts("Operation not permitted");
			break;
		case ENOENT:
			puts("File not found");
		case EACCES:
			puts("Permission denied");
			break;
			break;
		case EROFS:
			puts("Read only file");
			break;
		case ENAMETOOLONG:
			puts("Filename is too long");
			break;
		default:
			puts("Too ugly to describe");
		}
		exit(1);
	}
	puts("File renamed");
	return(0);
}