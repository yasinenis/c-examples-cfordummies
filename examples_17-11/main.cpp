// examples_17-11
#include <stdio.h>

char* binbin(unsigned n);

int main()
{
	unsigned bshift, x;

	printf("Type a value 0 to 255: ");
	scanf_s("%u", &bshift);

	for (x = 0;x < 8;x++)
	{
		printf("%s %d\n", binbin(bshift), bshift);
		bshift <<= 1;
	}
	return(0);
}

char* binbin(unsigned n)
{
	static char bin[17];
	int x;

	for (x = 0;x < 16;x++)
	{
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<= 1;
	}
	bin[x] = '\0';
	return(bin);
}