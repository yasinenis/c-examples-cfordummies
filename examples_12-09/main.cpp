// examples_12-09
#include <stdio.h>
int main()
{
	char firstname[16];

	printf("What is your name? ");
	fgets(firstname, 16, stdin);
	printf("Pleased to meet you, %s\n", firstname);
	return(0);
}