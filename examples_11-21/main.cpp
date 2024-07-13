// examples_11-21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int secret, guess;
	srand((unsigned)time(NULL));
	secret = rand();
	printf("Can you guess the secret number: ");
	scanf_s("%d", &guess);
	if (guess == secret)
	{
		puts("You guessed it!");
		return(0);
	}
	else
	{
		puts("Wrong!");
		printf("The secret number was %d\n", secret);
		return(1);
	}
}