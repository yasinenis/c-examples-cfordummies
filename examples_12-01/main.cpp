// examples_12-01
#include <stdio.h>
int main()
{
	int highscore1, highscore2, highscore3;

	printf("Your highest score: ");
	scanf_s("%d", &highscore1);
	printf("Your second highest score: ");
	scanf_s("%d", &highscore2);
	printf("Your third highest score: ");
	scanf_s("%d", &highscore3);


	puts("Here are your high scores");
	printf("#1 %d\n", highscore1);
	printf("#2 %d\n", highscore2);
	printf("#3 %d\n", highscore3);

	return(0);
}