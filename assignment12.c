#include <stdio.h>

int main() {
    int a, b, i, gcd, scd = -1;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // ---------- GCD (Euclidean Algorithm) ----------
    int x = a, y = b, temp;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    // ---------- Smallest Common Divisor (>1) ----------
    for (i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            scd = i;
            break;
        }
    }

    // Output
    if (scd == -1)
        printf("No common divisor other than 1\n");
    else
        printf("Smallest Common Divisor (other than 1) = %d\n", scd);

    printf("GCD of %d and %d = %d\n", a, b, gcd);

    return 0;
}
