// example_8-12
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
	else
	{
		puts("Wrong!");
		return(1);
	}
}