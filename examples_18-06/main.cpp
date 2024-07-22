// examples_18-06
#include <stdio.h>
int main()
{
	char c = 'c';
	int i = 123;
	float f = 98.6;
	double d = 6.022E23;

	printf("Adress of 'c' %p\n", &c);
	printf("Adress of 'i' %p\n", &i);
	printf("Adress of 'f' %p\n", &f);
	printf("Adress of 'd' %p\n", &d);
	return(0);
}