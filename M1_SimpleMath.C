
#include <stdio.h>

int main(void) {
    double a, b, c, d;
    double sum, avg, sumSquares;

    printf("Enter First Number: ");
    if (scanf("%lf", &a) != 1) return 1;
    printf("Enter Second Number: ");
    if (scanf("%lf", &b) != 1) return 1;
    printf("Enter Third Number: ");
    if (scanf("%lf", &c) != 1) return 1;
    printf("Enter Fourth Number: ");
    if (scanf("%lf", &d) != 1) return 1;

    sum = a + b + c + d;
    avg = sum / 4.0;
    sumSquares = a*a + b*b + c*c + d*d;

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Sum of squares: %.2f\n", sumSquares);

    return 0;
}

