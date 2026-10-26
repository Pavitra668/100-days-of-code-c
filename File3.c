#include <stdio.h>

int main() {
    char source[100], destination[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", source);

    printf("Enter destination filename: ");
    scanf("%99s", destination);

    src = fopen(source, "r");

    if (src == NULL) {
        printf("Error opening source file!");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL) {
        printf("Error opening destination file!");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destination);

    fclose(src);
    fclose(dest);

    return 0;
}