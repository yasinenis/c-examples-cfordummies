// Example_7-12
#include <stdio.h>
int main()
{
	char firstname[15];

	printf("Type your first name: ");
	scanf_s("%s", firstname, sizeof(firstname));
	printf("Pleased to meet you, %s.\n", firstname);
	return(0);
}