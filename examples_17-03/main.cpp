// examples_17-03
#include <stdio.h>

char* binbin(unsigned char n);

int main()
{
	const int set = 32;
	unsigned int bor, result;

	printf("Type a value from 0 to 255: ");
	scanf_s("%u", &bor);
	result = bor | set;

	printf("\t%s\t%d\n", binbin((unsigned char)bor), bor);
	printf("|\t%s\t%d\n", binbin((unsigned char)set), set);
	printf("=\t%s\t%d\n", binbin((unsigned char)result), result);
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