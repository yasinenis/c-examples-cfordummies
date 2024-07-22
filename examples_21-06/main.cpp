// examples_21-06
#include <stdio.h>
#include <time.h>
#include <errno.h>

int main()
{
    time_t tictoc;
    struct tm today;  // Pointer yerine do�rudan struct tm kullan�yoruz
    errno_t err;

    time(&tictoc);
    err = localtime_s(&today, &tictoc);  // localtime_s kullan�m�
    if (err != 0) {
        printf("Failed to get the local time. Error code: %d\n", err);
        return 1;
    }

    printf("Today is %d/%d/%d\n",
        today.tm_mon + 1,  // tm_mon 0-11 aras�nda de�er d�nd�r�r, bu y�zden 1 ekleriz
        today.tm_mday,
        today.tm_year + 1900);  // tm_year 1900'dan beri ge�en y�llar� d�nd�r�r
    return 0;
}
