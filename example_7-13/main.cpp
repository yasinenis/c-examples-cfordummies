// Example_7-13
#include <stdio.h>
int main()
{
	char firstname[15];
	char lastname[15];

	printf("Type your first name: ");
	scanf_s("%s", firstname, sizeof(firstname));
	printf("Type your last name: ");
	scanf_s("%s", lastname, sizeof(firstname));
	printf("Pleased to meet you, %s %s.\n", firstname, lastname);
	return()
}