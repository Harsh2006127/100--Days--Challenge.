#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Taking filename input
    printf("Enter file name: ");
    scanf("%s", filename);

    // Opening file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File does not exist!\n");
        return 1;
    }

    // Taking text input
    printf("Enter text to append: ");
    getchar(); // to clear newline from buffer
    fgets(text, sizeof(text), stdin);

    // Writing text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
