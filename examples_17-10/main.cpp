// examples_17-10
#include <stdio.h>

char* binbin(unsigned char n);

int main()
{
	unsigned bshift, x;

	printf("Type a value 0 to 255: ");
	scanf_s("%u", &bshift);

	for (x = 0;x < 8;x++)
	{
		printf("%s\n", binbin((unsigned char)bshift));
		bshift = bshift << 1;
	}
	return(0);
}

char* binbin(unsigned char n)
{
	static char bin[9];
	int x;

	for (x = 0;x < 8;x++)
	{
		bin[x] = n & 0x80 ? '1' : '0';
		n <<= 1;
	}
	bin[x] = '\0';
	return(bin);
}