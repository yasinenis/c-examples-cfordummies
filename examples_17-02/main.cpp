// examples_17-02
#include <stdio.h>

char* binbin(unsigned n);   // ? neden * var

int main()
{
    unsigned input;

    printf("Type a value 0 to 65535: ");
    scanf_s("%u",&input);
    printf("%u is binary %s\n", input, binbin(input));
    return(0);
}

char *binbin(unsigned n)
{
    static char bin[17];
    int x;

    for(x=0;x<16;x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}