// example_7-14
#include <stdio.h>
int main()
{
	int fav;
	printf("What is your favorite number: ");
	scanf_s("%d", &fav, sizeof(fav));
	printf("%d is my favorite number , too!\n", fav);
	return(0);
}