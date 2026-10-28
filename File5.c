#include <stdio.h>

int main() {
    char filename[100];
    char ch;
    FILE *fp;

    printf("Filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");

        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}