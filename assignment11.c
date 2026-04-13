#include <stdio.h>
#include <math.h>

int main() {
    int n, i, temp;
    long long f = 1;

    scanf("%d", &n);

    if(n >= 0) printf("Square root = %.2f\n", sqrt(n));
    else printf("Square root not defined\n");

    printf("Square = %d\n", n*n);
    printf("Cube = %d\n", n*n*n);

    int prime = 1;
    if(n <= 1) prime = 0;
    for(i = 2; i <= n/2; i++)
        if(n % i == 0) prime = 0;

    if(prime) printf("Prime\n");
    else printf("Not Prime\n");

    if(n >= 0) {
        for(i = 1; i <= n; i++) f *= i;
        printf("Factorial = %lld\n", f);
    } else printf("Factorial not defined\n");

    printf("Prime factors: ");
    temp = n;
    for(i = 2; i <= temp; i++)
        while(temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }

    return 0;
}
