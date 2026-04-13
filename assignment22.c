#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    do {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Check Substring\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of first string: %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("After copying, second string: %s\n", str2);
                break;

            case 3:
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                strrev(str1);  // Note: May not work in some compilers
                printf("Reversed string: %s\n", str1);
                break;

            case 6:
                if (strstr(str1, str2) != NULL)
                    printf("Second string is a substring of first string\n");
                else
                    printf("Not a substring\n");
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
