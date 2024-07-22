// examples_22-13
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
	struct agent bond2;
	struct agent bond3;
	FILE* jbdb;
	errno_t err;

	/* open the file for appending */
	err = fopen_s(&jbdb, "bond.db", "a");
	if (err != 0)
	{
		puts("SPECTRE wins!");
		exit(1);
	}

	/* assign data */
	strncpy_s(bond2.actor, "Roger Moore", sizeof(bond2.actor));
	bond2.year = 1973;
	strncpy_s(bond2.title, "Live and Let Die", sizeof(bond2.title));
	fwrite(&bond2, sizeof(struct agent), 1, jbdb);

	strncpy_s(bond3.actor, "Pierce Brosnan", sizeof(bond3.actor));
	bond3.year = 1995;
	strncpy_s(bond3.title, "GoldenEye",sizeof(bond3.title));
	fwrite(&bond3, sizeof(struct agent), 1, jbdb);

	fclose(jbdb);
	puts("Records written");

	return(0);
}