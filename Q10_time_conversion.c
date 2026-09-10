// Q10: Convert seconds to hours:minutes:seconds.
#include <stdio.h>

int main(void) {
    long long totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%lld", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%02lld:%02lld:%02lld\n", hours, minutes, seconds);
    return 0;
}
