// example_8-19
#include <stdio.h>
int main()
{
	char choice;
	puts("Meal Plans: ");
	puts("A - Breakfast, Lunch, and Dinner");
	puts("B - Lunch and Dinner only");
	puts("C - Dinner only");
	printf("Your choice: ");
	scanf_s("%c", &choice);

	printf("You've opted for ");
	switch (choice)
	{
	case 'A':
		printf("Breakfast, ");
	case 'B':
		printf("Lunch and ");
	case 'C':
		printf("Dinner");
	default:
		printf("as your meal plan.\n");
	}
	return(0);
}