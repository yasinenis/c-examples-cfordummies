// examples_25-02
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	int* px;

	px = &x;
	for (x = 0;x < 10;x++)
		printf("%d\n", *px);
	return 0;
}