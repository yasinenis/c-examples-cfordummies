// examples_22-12
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

	strncpy_s(bond.actor, "Sean Connery", sizeof(bond.actor));
	bond.year = 1962;
	strncpy_s(bond.title, "Dr. No", sizeof(bond.title));

	err = fopen_s(&jbdb, "bond.db", "w");
	if (err != 0)
	{
		puts("SPECTRE wins!");
		exit(1);
	}
	fwrite(&bond, sizeof(struct agent), 1, jbdb);
	fclose(jbdb);
	puts("Record written");

	return(0);
}