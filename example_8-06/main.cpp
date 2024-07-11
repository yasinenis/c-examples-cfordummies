// example_8-06
#include <stdio.h>
int main()
{
	const int secret = 17;
	int guess;

	printf("Can you guess the secret number: ");
	scanf_s("%d", &guess);
	if (guess == secret)
	{
		puts("You guessed it!");
		return(0);
	}
	if (guess != secret)
	{
		puts("Wrong!");
		return(1);
	}
	return(0);
}