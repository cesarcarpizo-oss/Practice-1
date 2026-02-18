#include <stdio.h>

int main() {
    int totalSeconds;
    int h, m, s;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours
    h = totalSeconds / 3600;

    // Get the remainder after hours are removed
    int remainingAfterHours = totalSeconds % 3600;

    // Calculate minutes from the remainder
    m = remainingAfterHours / 60;

    // Get the final seconds
    s = remainingAfterHours % 60;

    printf("%d seconds is equivalent to: %d hours, %d minutes, and %d seconds\n", totalSeconds, h, m, s);

    return 0;
}

