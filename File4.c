#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open the existing file in append mode
    fp = fopen("data.txt", "a");

    // Check if the file opened successfully
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Get a line of text from the user
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the end of the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}