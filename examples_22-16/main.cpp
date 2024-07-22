// examples_22-16
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
	errno_t err;

	err = fopen_s(&jbdb, "bond.db", "r");
	if (err != 0)
	{
		puts("SPECTRE wins!");
		exit(1);
	}
	/* locate the 2nd record based on the size of structure agent */
	fseek(jbdb, sizeof(struct agent) * 1, SEEK_SET);
	fread(&bond, sizeof(struct agent), 1, jbdb);
	printf("%s\t%d\t%s\n",
		bond.actor,
		bond.year,
		bond.title);
	fclose(jbdb);
	return(0);
}