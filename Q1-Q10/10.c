#include <stdio.h>

int main() {
    int totalSeconds = 3661;  // total time in seconds
    int hours, minutes, seconds;

    // Calculate hours, minutes, seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display result
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
