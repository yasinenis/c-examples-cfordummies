// examples_19-15
#include <stdio.h>

int main()
{
    char *sample = "From whence cometh my help?\n";

    while(putchar(*sample++))
        ;
    return(0);
}
