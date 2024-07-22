// examples_21-06
#include <stdio.h>
#include <time.h>
#include <errno.h>

int main()
{
    time_t tictoc;
    struct tm today;  // Pointer yerine doðrudan struct tm kullanýyoruz
    errno_t err;

    time(&tictoc);
    err = localtime_s(&today, &tictoc);  // localtime_s kullanýmý
    if (err != 0) {
        printf("Failed to get the local time. Error code: %d\n", err);
        return 1;
    }

    printf("Today is %d/%d/%d\n",
        today.tm_mon + 1,  // tm_mon 0-11 arasýnda deðer döndürür, bu yüzden 1 ekleriz
        today.tm_mday,
        today.tm_year + 1900);  // tm_year 1900'dan beri geçen yýllarý döndürür
    return 0;
}
