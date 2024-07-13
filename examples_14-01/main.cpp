// examples_14-01
#include <stdio.h>
int main()
{
	struct player
	{
		char name[32];
		int highscore;
	};
	struct player xbox;

	printf("Enter the player's name: ");
	scanf_s("%s", xbox.name, sizeof(xbox.name));
	printf("Enter their high score: ");
	scanf_s("%d", &xbox.highscore, sizeof(xbox.highscore));
	
	printf("Player %s has a high score of %d\n", xbox.name, xbox.highscore);
	return(0);
}