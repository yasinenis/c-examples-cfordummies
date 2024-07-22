// examples_14-06
#include <stdio.h>
int main()
{
	struct scores
	{
		char name[32];
		int score;
	};

	struct scores player[4];
	int x;

	for (x = 0;x < 4;x++)
	{
		printf("Enter player %d: ", x + 1);
		scanf_s("%s", player[x].name, sizeof(player[x].name));
		printf("Enter their score: ");
		scanf_s("%d", &player[x].score);
	}

	puts("Player Info");
	printf("#\tName\tScore\n");
	for (x = 0;x < 4;x++)
	{
		printf("%d\t%s\t%10d\n", x + 1, player[x].name, player[x].score);
	}
	return(0);
}