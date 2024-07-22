// examples_21-09
#include <stdio.h>
#include <time.h>
#include <errno.h>

int main()
{
    time_t tictoc;
    struct tm today;
    errno_t err;
    const char* weekday[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };

    time(&tictoc);

    err = localtime_s(&today, &tictoc);
    if (err != 0) {
        printf("Failed to get local time. Error code: %d\n", err);
        return 1;
    }

    printf("Today is %s\n", weekday[today.tm_wday]);
    return 0;
}
