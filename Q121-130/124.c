#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    char ch;

    // Taking filenames as input
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Opening source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Source file does not exist!\n");
        return 1;
    }

    // Opening destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Could not create destination file!\n");
        fclose(src);
        return 1;
    }

    // Copying contents character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Closing both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}
