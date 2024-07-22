// examples_22-15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	struct agent {
		char actor[32];
		int year;
		char title[32];
	};
	struct agent bond;
	FILE* jbdb;
	int r;
	errno_t err;

	err = fopen_s(&jbdb, "bond.db", "r");
	if (err != 0)
	{
		puts("SPECTRE wins!");
		exit(1);
	}

	puts("First read-through:");
	while (!feof(jbdb))
	{
		printf("%ld:\t", ftell(jbdb));
		r = fread(&bond, sizeof(struct agent), 1, jbdb);
		if (r == 0)
			break;
		printf("%s\t%d\t%s\n",
			bond.actor,
			bond.year,
			bond.title);
	}
	
	/* restart! */
	rewind(jbdb);

	puts("second read-through:");
	while (!feof(jbdb))
	{
		printf("%ld:\t", ftell(jbdb));
		r = fread(&bond, sizeof(struct agent), 1, jbdb);
		if (r == 0)
			break;
		printf("%s\t%d\t%s\n",
			bond.actor,
			bond.year,
			bond.title);
	}

	/* close and exit */
	fclose(jbdb);
	return(0);
}