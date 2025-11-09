#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("info.txt", "r"); // open existing file in read mode

    if(fp == NULL) {
        printf("File not found!");
        return 1;
    }

    // Read and print each line until EOF
    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp); // close the file

    return 0;
}
