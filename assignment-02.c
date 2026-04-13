#include <stdio.h>

int main() {
    int choice;
    float a, b;

    scanf("%d", &choice);
    scanf("%f %f", &a, &b);

    switch(choice) {
        case 1:
            printf("Addition = %.2f", a + b);
            break;
        case 2:
            printf("Subtraction = %.2f", a - b);
            break;
        case 3:
            printf("Multiplication = %.2f", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
