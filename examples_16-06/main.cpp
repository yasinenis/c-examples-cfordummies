// examples_16-06
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
	static int a;

	printf("The value of variable a is %d\n", a);
	printf("Enter a new value: ");
	scanf_s("%d", &a);
}