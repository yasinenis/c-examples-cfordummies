// examples_13-04
#include <stdio.h>
#include <ctype.h>
int main()
{
	char answer;

	printf("Would you like to blow up the moon? ");
	scanf_s("%c", &answer);
	answer = toupper(answer);
	if (answer == 'Y')
		puts("BOOM!");
	else
		puts("The moon is safe");
	return(0);
}