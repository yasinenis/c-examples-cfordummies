// examples_13-10
#include <stdio.h>
#include <string.h>
int main()
{
	char first[40];
	char last[20];

	printf("What is your first name? ");
	scanf_s("%s", first, sizeof(first));
	printf("What is your last name? ");
	scanf_s("%s", last, sizeof(last));
	strcat_s(first, " ");
	strcat_s(first, last);
	printf("Pleased to meet you, %s!\n", first);
	return(0);
}