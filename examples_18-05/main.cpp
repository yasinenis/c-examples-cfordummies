// examples_18-05
#include <stdio.h>
int main()
{
	struct robot {
		int alive;
		char name[5];
		int xpos;
		int ypos;
		int strength;
	};

	printf("The evil robot struct size is %lu\n", sizeof(struct robot));
	return(0);
}