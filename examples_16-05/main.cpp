// examples_16-05
#include <stdio.h>

void proc(void);

int main()
{
	puts("First call");
	proc();
	puts("Second call");
	proc();
	return(0);
}

void proc(void)
{
	int a;
	a = 0;

	printf("The value of variable a is %d\n", a);
	printf("Enter a new value: ");
	scanf_s("%d", &a);
}