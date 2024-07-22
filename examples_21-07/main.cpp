// examples_21-07
#include <stdio.h>
#include <time.h>
#include <errno.h>

int main()
{
    time_t tictoc;
    struct tm today;
    errno_t err;

    time(&tictoc);
    err = localtime_s(&today, &tictoc);
    if (err != 0) {
        printf("Failed to get the local time. Error code: %d\n", err);
        return 1;
    }

    printf("It's now %d:%02d:%02d\n",
        today.tm_hour,
        today.tm_min,
        today.tm_sec);
    return 0;
}
