// examples_13-08
#include <stdio.h>
#include <string.h>
int main()
{
	char password[] = "taco";
	char input[15];

	printf("password: ");
	scanf_s("%s", input,sizeof(input));

	if (strcmp(input, password) == 0)
		puts("Password accepted");
	else
		puts("Invalid password. Alert the authorities.");

	return(0);
}