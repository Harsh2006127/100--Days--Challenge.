#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("File Content:\n\n");

    // Display file contents
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
