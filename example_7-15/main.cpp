// example_7-15
#include <stdio.h>
int main()
{
	float fav;

	printf("What is your favorite number: ");
	scanf_s("%f", &fav, sizeof(fav));
	printf("%f is my favorite number, too!\n", fav);
	return(0);
}