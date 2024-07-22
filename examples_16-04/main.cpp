// examples_16-04
#include <stdio.h>
#include <string.h>
int main()
{
	typedef struct id
	{
		char first[20];
		char last[20];
	} personal;

	typedef struct date
	{
		int month;
		int day;
		int year;
	} calendar;

	struct human
	{
		personal name;
		calendar birthday;
	};
	struct human president;

	strcpy_s(president.name.first, "George");
	strcpy_s(president.name.last, "Washington");
	president.birthday.month = 2;
	president.birthday.day = 22;
	president.birthday.year = 1732;

	printf("%s %s was born on %d/%d/%d\n",
		president.name.first,
		president.name.last,
		president.birthday.month,
		president.birthday.day,
		president.birthday.year);

	return(0);
}