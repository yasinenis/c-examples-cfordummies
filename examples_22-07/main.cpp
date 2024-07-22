// examples_22-07
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* handle;
    int highscore;
    errno_t err;

    err = fopen_s(&handle, "scores.dat", "w");
    if (err != 0)
    {
        puts("File error!");
        exit(1);
    }

    printf("What is your high score? ");
    if (scanf_s("%d", &highscore) != 1)
    {
        puts("Invalid input!");
        fclose(handle);
        exit(1);
    }

    fwrite(&highscore, sizeof(int), 1, handle);
    fclose(handle);

    puts("Score saved");
    return 0;
}
