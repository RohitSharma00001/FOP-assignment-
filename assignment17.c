#include <stdio.h>

int main() {
    int n, i;
    float x, term, sum = 0;

    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    term = x; 

    for (i = 1; i <= n; i++) {
        sum += term;

        /
        term = -term * x * x / ((2 * i) * (2 * i + 1));
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}
