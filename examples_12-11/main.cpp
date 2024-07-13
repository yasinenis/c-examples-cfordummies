// examples_12-11
#include <stdio.h>
int main()
{
	char firstname[16], lastname[16];

	printf("What is your first name? ");
	scanf_s("%s", firstname, sizeof(firstname));
	printf("What is your last name? ");
	scanf_s("%s", lastname, sizeof(lastname));
	printf("Pleased to meet you, %s %s\n", firstname, lastname);
	return(0);
}