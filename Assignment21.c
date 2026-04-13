#include <stdio.h>

int main() {
    FILE *source, *target;
    char ch;

    source = fopen("source.txt", "r");

    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    target = fopen("target.txt", "w");

    if (target == NULL) {
        printf("Error: Cannot open target file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}
