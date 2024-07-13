// examples_12-02
#include <stdio.h>

int main()
{
	int highscore1, highscore2, highscore3, highscore4;

	printf("Your highest score: ");
	scanf_s("%d", &highscore1);
	printf("Your second highest score: ");
	scanf_s("%d", &highscore2);
	printf("Your third highest score: ");
	scanf_s("%d", &highscore3);
	printf("Your fourth highest score: ");
	scanf_s("%d", &highscore4);

	puts("Here are your high scores");
	printf("#1 %d\n", highscore1);
	printf("#2 %d\n", highscore2);
	printf("#3 %d\n", highscore3);
	printf("#4 %d\n", highscore4);

	return(0);
}